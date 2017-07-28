#include <QApplication>
#include <QString>
#include "mainwindow.h"
//#include <QDeclarativeProperty>
//#include <QDeclarativeContext>
//#include "qmlapplicationviewer.h"
//#include "mydeclarativewebview.h"
#include <QDesktopWidget>

bool isSmallResolution;
QString initialURL;

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QString current;
    QString currentName;
    QString currentVal;
    int idxOf=0;

    isSmallResolution = false;
    initialURL = "";

    /* Parse command line arguments */
    for(int i=0; i<argc; i++)
    {
        current = argv[i];
        idxOf = current.indexOf("=");
        if(idxOf == -1)
        {
            currentName = current;
            currentVal = QString();
        }else{
            currentName = current.left(idxOf);
            currentVal = current.mid(idxOf+1);
        }

        if(currentName.count())
        {
            if(currentName.contains(QString("smallresolution")))
            {
                // use small resolution
                isSmallResolution = true;
                int j=i;
                while(j<argc)
                {
                    argv[j]=argv[j+1];
                    j++;
                }
            }else if(currentName.contains(QString("url")))
            {
                initialURL = currentVal;
            }
        }

    }

    QApplication a(argc, argv);
    a.setApplicationName("Web Browser");

    a.setOverrideCursor(QCursor(Qt::BlankCursor));

    MainWindow w;
    w.setFixedSize(a.desktop()->size());
    w.showFullScreen();

    return a.exec();
}
