#ifndef MAIN_H
#define MAIN_H

#include <QColor>
#include <QString>

#define ORGANIZTION_NAME "soramimi.jp"
#define APPLICATION_NAME "Guitar"

extern QString application_data_dir;
extern QColor panel_bg_color;

struct ApplicationSettings {
	QString git_command;
	QString file_command;
	QString default_working_dir;
	QString proxy_type;
	QString proxy_server;
	bool get_committer_icon = false;
	bool automatically_fetch_when_opening_the_repository = true;
};

#endif // MAIN_H
