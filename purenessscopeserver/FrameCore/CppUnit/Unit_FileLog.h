#ifndef _UNIT_FILELOG_H
#define _UNIT_FILELOG_H

#ifdef _CPPUNIT_TEST

#include "Unit_Common.h"
#include "FileLogger.h"

class CUnit_FileLogger : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(CUnit_FileLogger);
    CPPUNIT_TEST(Test_FileLogger);
    CPPUNIT_TEST(Test_SendMail);
    CPPUNIT_TEST_SUITE_END();

public:
    CUnit_FileLogger();

    virtual ~CUnit_FileLogger();

    CUnit_FileLogger(const CUnit_FileLogger& ar);

    CUnit_FileLogger& operator = (const CUnit_FileLogger& ar)
    {
        if (this != &ar)
        {
            ACE_UNUSED_ARG(ar);
        }

        return *this;
    }

    virtual void setUp(void);

    virtual void tearDown(void);

    void Test_FileLogger(void);

    void Test_SendMail(void);

private:
    CLogFile* m_pLogFile;
};

#endif

#endif
