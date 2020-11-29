#include "pch.h"
#include "CAD.h"

void CAD::setSQL(String^ requestSQL)
{
	this->requestSQL = requestSQL;
}

CAD::CAD(void)
{
	this->requestSQL = "";
	this->connectionString = "Data Source=.;Initial Catalog=database;Integrated Security=True";
	this->sqlConnection = gcnew SqlConnection(this->connectionString);
	this->sqlCommand = gcnew SqlCommand(this->requestSQL, this->sqlConnection);
	this->sqlCommand->CommandType = CommandType::Text;
}

int CAD::actionRowsID(String^ requestSQL)
{
	int id;
	this->setSQL(requestSQL);
	this->sqlCommand->CommandText = this->requestSQL;
	this->sqlConnection->Open();
	id = Convert::ToInt32(this->sqlCommand->ExecuteScalar());
	this->sqlConnection->Close();
	return id;
}

void CAD::actionRows(String^ requestSQL)
{
	this->setSQL(requestSQL);
	this->sqlCommand->CommandText = this->requestSQL;
	this->sqlConnection->Open();
	this->sqlCommand->ExecuteNonQuery();
	this->sqlConnection->Close();
}

DataSet^ CAD::getRows(String^ requestSQL, String^ dataTableName)
{
	this->setSQL(requestSQL);
	this->sqlDataAdapter = gcnew SqlDataAdapter(this->sqlCommand);
	this->sqlCommand->CommandText = this->requestSQL;
	this->dataSet = gcnew DataSet();
	this->sqlDataAdapter->Fill(this->dataSet, dataTableName);
	return this->dataSet;
}
