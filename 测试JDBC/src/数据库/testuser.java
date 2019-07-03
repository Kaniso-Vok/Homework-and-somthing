
package 数据库;

public class testuser {
    private int Sno;
    private String Sname;
    private int Sage;
    private int pwd;
    public testuser() {
    }
    public testuser(String Sname,int Sage,int pwd){
        this.Sname=Sname;
        this.Sage=Sage;
        this.pwd=pwd;
    }
    public testuser(int Sno,String Sname,int Sage,int pwd){
        this.Sno=Sno;
        this.Sname=Sname;
        this.Sage=Sage;
        this.pwd=pwd;
    }
   

    public int getSno() {
        return Sno;
    }

    public void setSno(int Sno) {
        this.Sno = Sno;
    }

    public String getSname() {
        return Sname;
    }

    public void setSname(String Sname) {
        this.Sname = Sname;
    }

    public int getSage() {
        return Sage;
    }

    public void setSage(int Sage) {
        this.Sage = Sage;
    }

    public int getPwd() {
        return pwd;
    }

    public void setPwd(int pwd) {
        this.pwd = pwd;
    }
    
    

    
}
