#include "inc/taskitem.hpp"
#include "ui_taskitem.h"

  
/*!
 * \brief Constructor TaskItem Class
 */
TaskItem::TaskItem(QString robot, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TaskItem),
    assigned_to(robot)
{
    ui->setupUi(this);

    update_id(-1);
    ui->title_label->setText(this->assigned_to);
}


/*!
 * \brief Destructor TaskItem Class
 */
TaskItem::~TaskItem()
{
    delete ui;
}

  
/*!
 * \brief Update progressbar
 * \param[in] progress - Value to be set
 */
void TaskItem::update_progress(int progress)
{
    ui->progressBar->setValue(progress);
}

void TaskItem::update_id(int id)
{
    if (id < 0)
    {
        ui->robot_label->setText("Task not assigned");
    }
    else if (id == 0)
    {
        ui->robot_label->setText("Home");
    }
    else
    {
        ui->robot_label->setText("Task #" + QString::number(id));
    }
}