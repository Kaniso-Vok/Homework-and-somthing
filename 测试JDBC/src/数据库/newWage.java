/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package 数据库;

/**
 *
 * @author 杨智康
 */
public class newWage{
    public String staffid,staffname,basicwage,poswage,natax,pltax,elderins,medins,way;
    public newWage(){
        
    }
    public newWage(String staffid, String staffname, String basicwage, String poswage, String natax, String pltax, String elderins, String medins, String way) {
        this.staffid = staffid;
        this.staffname = staffname;
        this.basicwage = basicwage;
        this.poswage = poswage;
        this.natax = natax;
        this.pltax = pltax;
        this.elderins = elderins;
        this.medins = medins;
        this.way = way;
    }

    public String getStaffid() {
        return staffid;
    }

    public void setStaffid(String staffid) {
        this.staffid = staffid;
    }

    public String getStaffname() {
        return staffname;
    }

    public void setStaffname(String staffname) {
        this.staffname = staffname;
    }
    public String getBasicwage() {
        return basicwage;
    }

    public void setBasicwage(String basicwage) {
        this.basicwage = basicwage;
    }

    public String getPoswage() {
        return poswage;
    }

    public void setPoswage(String poswage) {
        this.poswage = poswage;
    }
    
    public String getNatax() {
        return natax;
    }

    public void setNatax(String natax) {
        this.natax = natax;
    }

    public String getPltax() {
        return pltax;
    }

    public void setPltax(String pltax) {
        this.pltax = pltax;
    }

    public String getElderins() {
        return elderins;
    }

    public void setElderins(String elderins) {
        this.elderins = elderins;
    }

    public String getMedins() {
        return medins;
    }

    public void setMedins(String medoms) {
        this.medins = medoms;
    }

    public String getWay() {
        return way;
    }

    public void setWay(String way) {
        this.way = way;
    }
    
    
}
