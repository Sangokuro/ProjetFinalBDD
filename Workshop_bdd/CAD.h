#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class CAD
{
private: 
    String^ connectionString;
    String^ requestSQL;
    System::Data::SqlClient::SqlConnection^ sqlConnection;
    System::Data::SqlClient::SqlDataAdapter^ sqlDataAdapter;
    System::Data::SqlClient::SqlCommand^ sqlCommand;
    System::Data::DataSet^ dataSet;
    SqlDataReader^ myReader;
    void setSQL(String^);

public:
    CAD(void);
    CAD(String^ requestSQL, int etape);
    void initializeGetClient();
    int actionRowsID(String^);
    void actionRows(String^);
    DataSet^ getRows(String^, String^);
    
       
};


