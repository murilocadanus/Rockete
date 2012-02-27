#ifndef OPENEDSTYLESHEET_H
#define OPENEDSTYLESHEET_H

#include "RocketHelper.h"
#include "OpenedFile.h"
#include "CSSHighlighter.h"

class OpenedStyleSheet : public OpenedFile
{
public:
    OpenedStyleSheet();
    virtual void initialize();
    virtual void highlightString(const QString &str);
};

#endif
