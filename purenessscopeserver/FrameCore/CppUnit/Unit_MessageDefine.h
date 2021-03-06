#ifndef _UNIT_MESSAGEDEFINE_H
#define _UNIT_MESSAGEDEFINE_H

#ifdef _CPPUNIT_TEST

#include "Unit_Common.h"
#include "MessageDefine.h"

class CUnit_MessageDefine : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(CUnit_MessageDefine);
    CPPUNIT_TEST(Test_GetDyeingCommand);
    CPPUNIT_TEST(Test_GetDyeingIP);
    CPPUNIT_TEST(Test_GetFileInfo);
    CPPUNIT_TEST(Test_GetTrackIP);
    CPPUNIT_TEST(Test_GetLogLevel);
    CPPUNIT_TEST(Test_GetAIInfo);
    CPPUNIT_TEST(Test_GetConnectID);
    CPPUNIT_TEST(Test_GetMaxConnectCount);
    CPPUNIT_TEST(Test_GetListenInfo);
    CPPUNIT_TEST(Test_GetPoolSet);
    CPPUNIT_TEST_SUITE_END();

public:
    CUnit_MessageDefine();

    virtual ~CUnit_MessageDefine();

    CUnit_MessageDefine(const CUnit_MessageDefine& ar);

    CUnit_MessageDefine& operator = (const CUnit_MessageDefine& ar)
    {
        if (this != &ar)
        {
            ACE_UNUSED_ARG(ar);
        }

        return *this;
    }

    virtual void setUp(void);

    virtual void tearDown(void);

    void Test_GetDyeingCommand(void);
    void Test_GetDyeingIP(void);
    void Test_GetFileInfo(void);
    void Test_GetTrackIP(void);
    void Test_GetLogLevel(void);
    void Test_GetAIInfo(void);
    void Test_GetConnectID(void);
    void Test_GetMaxConnectCount(void);
    void Test_GetListenInfo(void);
    void Test_GetPoolSet(void);
private:
    int m_nMessageDefine;
};

#endif

#endif
