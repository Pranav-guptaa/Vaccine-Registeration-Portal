#include "secdialog.h"
#include "ui_secdialog.h"
#include "userlogin.h"

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    ui->adhaar->setPlaceholderText("Enter a valid Adhaar Card Number");
    ui->Age_3->setPlaceholderText("Enter your age");
    ui->Username_3->setPlaceholderText("Choose a unique Username");
    ui->Password->setPlaceholderText("Choose a strong Password");
    ui->label_2->setAlignment(Qt::AlignCenter);
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("F:/SQL lite/register.db");
    if(!mydb.open()){
         ui->label_2->setText("Database not connected");
    }
    else{
        ui->label_2->setText("Database connected");
}

}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_clicked()
{
    QSqlQuery qry,qry1;
    QString adhar, age, username, date, password,status;
    adhar = ui->adhaar->text();
    age= ui->Age_3->text();
    username = ui->Username_3->text();
    date = ui->dateEdit->text();
    password= ui->Password->text();

    QByteArray encryp = password.toUtf8();
    for (int j =0;j<encryp.size();j++ ) {
        encryp[j]= encryp[j]+4;
    }
    password = encryp;

    status = "Unvaccinated";
    if(!mydb.isOpen()){
        qDebug()<<"Database failed ";
    }
     if(qry1.exec("select * from register where username = '"+username+"'")){
        int count =0;
        while(qry1.next()){
            count++;
            }
        if(count==1){
            ui->label_2->setText("Deatils are required..! or Username already exists..!");
        }
        if(count<1){
            if(qry.exec("insert into register(adhar,age,username,date,password,status)values('"+adhar+"','"+age+"','"+username+"','"+date+"','"+password+"','"+status+"')")){
              ui->label_2->setText("Data entered you have been sucessfully registerd...!");
           }
        }
    }
     UserLogin user;
     user.setModal(true);
     user.exec();
}
