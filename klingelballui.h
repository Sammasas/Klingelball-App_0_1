#ifndef KLINGELBALLUI_H
#define KLINGELBALLUI_H

#include <QMainWindow>
#include <QSoundEffect>
#include "QSize"
#include <QByteArray>
#include <QBuffer>
#include <QAudioOutput>
#include <QAudioFormat>
#include <QFile>
#include "EinstellungsProfil.h"
#include <QScroller>
#include <QTimer>
#include <QList>
#include <QScreen>


QT_BEGIN_NAMESPACE
namespace Ui { class KlingelballUI; }
QT_END_NAMESPACE

class KlingelballUI : public QMainWindow
{
    Q_OBJECT

public:
    KlingelballUI(QWidget *parent = nullptr);
    ~KlingelballUI();

public slots:
    void change_profile_selection();
    void update_profile_transmittion_state();

private slots:
    void on_Bis_Frequ_valueChanged(int arg1);

    void on_Volume_valueChanged(int arg1);

    void on_Lightmode_checkBox_clicked();

    void on_Darkmode_checkBox_clicked();


    void on_FontSize_spinBox_valueChanged(int arg1);

    void on_profil_from_currentsettings_button_clicked();

    void on_new_profile_button_clicked();

    void on_new_profile_cancle_button_clicked();

    void on_delete_current_profile_button_clicked();

private:
    Ui::KlingelballUI *ui;

    QSoundEffect effect;
<<<<<<< HEAD
    bool transmit_profile = false;

    QFont *dynamicSizeFont;
    QFont *profile_dynamicSizeFont;

    void setup_UI();
    void setup_font();
    void setup_labels();
    void setup_buttons();
    void setup_spinbox();
    void setup_lineedit();
    void setup_tabwidget();

    void playSoundEffect(int Volume);
    void start_timer(int time);
=======
    bool transmitt_profile = false;

    void playSoundEffect(int Volume);
    void SetupUI();
>>>>>>> parent of 2243e57 (UI Updates)

    void create_Profile(QString name, int volume, int freq_still, int freq_bew);
    void create_Profile_visualisation(EinstellungsProfil *profil);
    void destroy_Profile_visualisation(EinstellungsProfil *profil);
    QList<EinstellungsProfil *> *Profile_list;

    void set_transmitt_profile(bool b);

Q_SIGNALS:
    void soundeffect_played();
};
#endif // KLINGELBALLUI_H
