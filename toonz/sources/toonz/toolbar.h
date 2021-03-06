#pragma once

#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QToolBar>

class QToolButton;

class Toolbar final : public QToolBar {
  Q_OBJECT

  QToolButton *m_expandButton;
  QAction *m_sep1, *m_sep2;
  bool m_isExpanded;

  void updateToolbar();

public:
  Toolbar(QWidget *parent, bool isVertical = true);
  ~Toolbar();

protected:
  bool addAction(QAction *act);

  void showEvent(QShowEvent *e) override;
  void hideEvent(QHideEvent *e) override;

protected slots:
  void onToolChanged();
  void setIsExpanded(bool expand);
};

#endif  // TOOLBAR_H
