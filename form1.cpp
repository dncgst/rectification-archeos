#include "form1.h"

#include <qvariant.h>
#include "form1.ui.h"
/*
 *  Constructs a Form1 as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
Form1::Form1(QWidget* parent, const char* name, Qt::WindowFlags fl)
    : Q3MainWindow(parent, name, fl)
{
    setupUi(this);

    (void)statusBar();
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
Form1::~Form1()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Form1::languageChange()
{
    retranslateUi(this);
}

