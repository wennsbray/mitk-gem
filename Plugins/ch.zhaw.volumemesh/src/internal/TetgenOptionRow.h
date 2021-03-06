#pragma once

#include <functional>
#include <QObject>
#include <QWidget>
#include <QCheckBox>
#include <QAbstractSpinBox>
#include <QGridLayout>

class TetgenOptionRow {
public:
    enum class ValueType {
        NONE, INT, FLOAT
    };

    TetgenOptionRow(std::string _flag, std::string _description, ValueType, QGridLayout*);
    ValueType getType();
    bool isChecked();
    void setChecked(bool);

    bool hasValue();
    int getIntValue();
    float getFloatValue();
    void setIntValue(int);
    void setFloatValue(float);

private:
    std::string m_Flag, m_Description;
    ValueType m_ValueType;

    QCheckBox *m_CheckBox;
    QAbstractSpinBox *m_ValueWidget;
};