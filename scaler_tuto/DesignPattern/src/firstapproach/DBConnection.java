package firstapproach;

public class DBConnection {
    private DBConnection(){};
    public static DBConnection dbc = null;
    public static DBConnection getInstance(){
        if(dbc == null)
        {
            dbc = new DBConnection();
        }
            return dbc;
    }

}

