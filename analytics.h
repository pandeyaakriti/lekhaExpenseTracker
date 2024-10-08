#ifndef ANALYTICS_H
#define ANALYTICS_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QBarSeries>
#include <QBarSet>
#include <QVBoxLayout>
#include <QToolTip>
#include <QDate>

class Home;
namespace Ui {
class Analytics;
}

class Analytics : public QMainWindow
{
    Q_OBJECT

public:
    explicit Analytics(QWidget *parent = nullptr);
    void displayLB();
    ~Analytics();

private slots:
    void on_homeButton_clicked();
    void setupPieChart();
    void onSliceHovered(QPieSlice *slice, bool state);
    void setupBarChart();
    void on_calendarWidget_currentPageChanged(int year, int month);
    void displayCapital();
    void showAvailableBalance();
    void on_pushButton_clicked();
    void showBudgetS();
    void on_pushButton_4_clicked();

private:
    Ui::Analytics *ui;
    Home *homeWindow;
    QSqlDatabase db;
    int selectedYear;
    int selectedMonth;
};

#endif // ANALYTICS_H
