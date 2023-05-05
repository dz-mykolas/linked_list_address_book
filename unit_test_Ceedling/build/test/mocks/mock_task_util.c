/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_task_util.h"

static const char* CMockString_ask_address_input = "ask_address_input";
static const char* CMockString_ask_input = "ask_input";
static const char* CMockString_ask_num = "ask_num";
static const char* CMockString_buffer = "buffer";
static const char* CMockString_consume_buffer = "consume_buffer";
static const char* CMockString_do_task = "do_task";
static const char* CMockString_file = "file";
static const char* CMockString_file_open = "file_open";
static const char* CMockString_file_path = "file_path";
static const char* CMockString_list = "list";
static const char* CMockString_load_file = "load_file";
static const char* CMockString_print_possible = "print_possible";
static const char* CMockString_sig_handler = "sig_handler";
static const char* CMockString_signum = "signum";
static const char* CMockString_task = "task";

typedef struct _CMOCK_sig_handler_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  int Expected_signum;

} CMOCK_sig_handler_CALL_INSTANCE;

typedef struct _CMOCK_file_open_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  char* Expected_file_path;
  struct Person** Expected_list;

} CMOCK_file_open_CALL_INSTANCE;

typedef struct _CMOCK_load_file_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  FILE* Expected_file;
  struct Person** Expected_list;

} CMOCK_load_file_CALL_INSTANCE;

typedef struct _CMOCK_print_possible_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_print_possible_CALL_INSTANCE;

typedef struct _CMOCK_consume_buffer_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  char* Expected_buffer;

} CMOCK_consume_buffer_CALL_INSTANCE;

typedef struct _CMOCK_ask_num_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;

} CMOCK_ask_num_CALL_INSTANCE;

typedef struct _CMOCK_ask_input_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char* ReturnVal;
  int CallOrder;

} CMOCK_ask_input_CALL_INSTANCE;

typedef struct _CMOCK_ask_address_input_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  struct Person* ReturnVal;
  int CallOrder;

} CMOCK_ask_address_input_CALL_INSTANCE;

typedef struct _CMOCK_do_task_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  struct Person** Expected_list;
  int Expected_task;

} CMOCK_do_task_CALL_INSTANCE;

static struct mock_task_utilInstance
{
  char sig_handler_IgnoreBool;
  char sig_handler_CallbackBool;
  CMOCK_sig_handler_CALLBACK sig_handler_CallbackFunctionPointer;
  int sig_handler_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE sig_handler_CallInstance;
  char file_open_IgnoreBool;
  char file_open_CallbackBool;
  CMOCK_file_open_CALLBACK file_open_CallbackFunctionPointer;
  int file_open_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE file_open_CallInstance;
  char load_file_IgnoreBool;
  char load_file_CallbackBool;
  CMOCK_load_file_CALLBACK load_file_CallbackFunctionPointer;
  int load_file_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE load_file_CallInstance;
  char print_possible_IgnoreBool;
  char print_possible_CallbackBool;
  CMOCK_print_possible_CALLBACK print_possible_CallbackFunctionPointer;
  int print_possible_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE print_possible_CallInstance;
  char consume_buffer_IgnoreBool;
  char consume_buffer_CallbackBool;
  CMOCK_consume_buffer_CALLBACK consume_buffer_CallbackFunctionPointer;
  int consume_buffer_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE consume_buffer_CallInstance;
  char ask_num_IgnoreBool;
  int ask_num_FinalReturn;
  char ask_num_CallbackBool;
  CMOCK_ask_num_CALLBACK ask_num_CallbackFunctionPointer;
  int ask_num_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE ask_num_CallInstance;
  char ask_input_IgnoreBool;
  char* ask_input_FinalReturn;
  char ask_input_CallbackBool;
  CMOCK_ask_input_CALLBACK ask_input_CallbackFunctionPointer;
  int ask_input_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE ask_input_CallInstance;
  char ask_address_input_IgnoreBool;
  struct Person* ask_address_input_FinalReturn;
  char ask_address_input_CallbackBool;
  CMOCK_ask_address_input_CALLBACK ask_address_input_CallbackFunctionPointer;
  int ask_address_input_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE ask_address_input_CallInstance;
  char do_task_IgnoreBool;
  char do_task_CallbackBool;
  CMOCK_do_task_CALLBACK do_task_CallbackFunctionPointer;
  int do_task_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE do_task_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_task_util_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.sig_handler_CallInstance;
  if (Mock.sig_handler_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_sig_handler);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.sig_handler_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.file_open_CallInstance;
  if (Mock.file_open_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_file_open);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.file_open_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.load_file_CallInstance;
  if (Mock.load_file_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_load_file);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.load_file_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.print_possible_CallInstance;
  if (Mock.print_possible_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_print_possible);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.print_possible_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.consume_buffer_CallInstance;
  if (Mock.consume_buffer_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_consume_buffer);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.consume_buffer_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.ask_num_CallInstance;
  if (Mock.ask_num_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_ask_num);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.ask_num_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.ask_input_CallInstance;
  if (Mock.ask_input_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_ask_input);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.ask_input_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.ask_address_input_CallInstance;
  if (Mock.ask_address_input_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_ask_address_input);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.ask_address_input_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.do_task_CallInstance;
  if (Mock.do_task_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_do_task);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.do_task_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_task_util_Init(void)
{
  mock_task_util_Destroy();
}

void mock_task_util_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void sig_handler(int signum)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_sig_handler_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_sig_handler);
  cmock_call_instance = (CMOCK_sig_handler_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.sig_handler_CallInstance);
  Mock.sig_handler_CallInstance = CMock_Guts_MemNext(Mock.sig_handler_CallInstance);
  if (Mock.sig_handler_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.sig_handler_CallbackBool &&
      Mock.sig_handler_CallbackFunctionPointer != NULL)
  {
    Mock.sig_handler_CallbackFunctionPointer(signum, Mock.sig_handler_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_sig_handler,CMockString_signum);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_signum, signum, cmock_line, CMockStringMismatch);
  }
  if (Mock.sig_handler_CallbackFunctionPointer != NULL)
  {
    Mock.sig_handler_CallbackFunctionPointer(signum, Mock.sig_handler_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_sig_handler(CMOCK_sig_handler_CALL_INSTANCE* cmock_call_instance, int signum);
void CMockExpectParameters_sig_handler(CMOCK_sig_handler_CALL_INSTANCE* cmock_call_instance, int signum)
{
  cmock_call_instance->Expected_signum = signum;
}

void sig_handler_CMockIgnore(void)
{
  Mock.sig_handler_IgnoreBool = (char)1;
}

void sig_handler_CMockStopIgnore(void)
{
  Mock.sig_handler_IgnoreBool = (char)0;
}

void sig_handler_CMockExpect(UNITY_LINE_TYPE cmock_line, int signum)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_sig_handler_CALL_INSTANCE));
  CMOCK_sig_handler_CALL_INSTANCE* cmock_call_instance = (CMOCK_sig_handler_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.sig_handler_CallInstance = CMock_Guts_MemChain(Mock.sig_handler_CallInstance, cmock_guts_index);
  Mock.sig_handler_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_sig_handler(cmock_call_instance, signum);
}

void sig_handler_AddCallback(CMOCK_sig_handler_CALLBACK Callback)
{
  Mock.sig_handler_IgnoreBool = (char)0;
  Mock.sig_handler_CallbackBool = (char)1;
  Mock.sig_handler_CallbackFunctionPointer = Callback;
}

void sig_handler_Stub(CMOCK_sig_handler_CALLBACK Callback)
{
  Mock.sig_handler_IgnoreBool = (char)0;
  Mock.sig_handler_CallbackBool = (char)0;
  Mock.sig_handler_CallbackFunctionPointer = Callback;
}

void file_open(char* file_path, struct Person** list)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_file_open_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_file_open);
  cmock_call_instance = (CMOCK_file_open_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.file_open_CallInstance);
  Mock.file_open_CallInstance = CMock_Guts_MemNext(Mock.file_open_CallInstance);
  if (Mock.file_open_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.file_open_CallbackBool &&
      Mock.file_open_CallbackFunctionPointer != NULL)
  {
    Mock.file_open_CallbackFunctionPointer(file_path, list, Mock.file_open_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_file_open,CMockString_file_path);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_file_path, file_path, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_file_open,CMockString_list);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_list, list, cmock_line, CMockStringMismatch);
  }
  if (Mock.file_open_CallbackFunctionPointer != NULL)
  {
    Mock.file_open_CallbackFunctionPointer(file_path, list, Mock.file_open_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_file_open(CMOCK_file_open_CALL_INSTANCE* cmock_call_instance, char* file_path, struct Person** list);
void CMockExpectParameters_file_open(CMOCK_file_open_CALL_INSTANCE* cmock_call_instance, char* file_path, struct Person** list)
{
  cmock_call_instance->Expected_file_path = file_path;
  cmock_call_instance->Expected_list = list;
}

void file_open_CMockIgnore(void)
{
  Mock.file_open_IgnoreBool = (char)1;
}

void file_open_CMockStopIgnore(void)
{
  Mock.file_open_IgnoreBool = (char)0;
}

void file_open_CMockExpect(UNITY_LINE_TYPE cmock_line, char* file_path, struct Person** list)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_file_open_CALL_INSTANCE));
  CMOCK_file_open_CALL_INSTANCE* cmock_call_instance = (CMOCK_file_open_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.file_open_CallInstance = CMock_Guts_MemChain(Mock.file_open_CallInstance, cmock_guts_index);
  Mock.file_open_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_file_open(cmock_call_instance, file_path, list);
}

void file_open_AddCallback(CMOCK_file_open_CALLBACK Callback)
{
  Mock.file_open_IgnoreBool = (char)0;
  Mock.file_open_CallbackBool = (char)1;
  Mock.file_open_CallbackFunctionPointer = Callback;
}

void file_open_Stub(CMOCK_file_open_CALLBACK Callback)
{
  Mock.file_open_IgnoreBool = (char)0;
  Mock.file_open_CallbackBool = (char)0;
  Mock.file_open_CallbackFunctionPointer = Callback;
}

void load_file(FILE* file, struct Person** list)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_load_file_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_load_file);
  cmock_call_instance = (CMOCK_load_file_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.load_file_CallInstance);
  Mock.load_file_CallInstance = CMock_Guts_MemNext(Mock.load_file_CallInstance);
  if (Mock.load_file_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.load_file_CallbackBool &&
      Mock.load_file_CallbackFunctionPointer != NULL)
  {
    Mock.load_file_CallbackFunctionPointer(file, list, Mock.load_file_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_load_file,CMockString_file);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_file), (void*)(file), sizeof(FILE), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_load_file,CMockString_list);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_list, list, cmock_line, CMockStringMismatch);
  }
  if (Mock.load_file_CallbackFunctionPointer != NULL)
  {
    Mock.load_file_CallbackFunctionPointer(file, list, Mock.load_file_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_load_file(CMOCK_load_file_CALL_INSTANCE* cmock_call_instance, FILE* file, struct Person** list);
void CMockExpectParameters_load_file(CMOCK_load_file_CALL_INSTANCE* cmock_call_instance, FILE* file, struct Person** list)
{
  cmock_call_instance->Expected_file = file;
  cmock_call_instance->Expected_list = list;
}

void load_file_CMockIgnore(void)
{
  Mock.load_file_IgnoreBool = (char)1;
}

void load_file_CMockStopIgnore(void)
{
  Mock.load_file_IgnoreBool = (char)0;
}

void load_file_CMockExpect(UNITY_LINE_TYPE cmock_line, FILE* file, struct Person** list)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_load_file_CALL_INSTANCE));
  CMOCK_load_file_CALL_INSTANCE* cmock_call_instance = (CMOCK_load_file_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.load_file_CallInstance = CMock_Guts_MemChain(Mock.load_file_CallInstance, cmock_guts_index);
  Mock.load_file_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_load_file(cmock_call_instance, file, list);
}

void load_file_AddCallback(CMOCK_load_file_CALLBACK Callback)
{
  Mock.load_file_IgnoreBool = (char)0;
  Mock.load_file_CallbackBool = (char)1;
  Mock.load_file_CallbackFunctionPointer = Callback;
}

void load_file_Stub(CMOCK_load_file_CALLBACK Callback)
{
  Mock.load_file_IgnoreBool = (char)0;
  Mock.load_file_CallbackBool = (char)0;
  Mock.load_file_CallbackFunctionPointer = Callback;
}

void print_possible(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_print_possible_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_print_possible);
  cmock_call_instance = (CMOCK_print_possible_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.print_possible_CallInstance);
  Mock.print_possible_CallInstance = CMock_Guts_MemNext(Mock.print_possible_CallInstance);
  if (Mock.print_possible_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.print_possible_CallbackBool &&
      Mock.print_possible_CallbackFunctionPointer != NULL)
  {
    Mock.print_possible_CallbackFunctionPointer(Mock.print_possible_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.print_possible_CallbackFunctionPointer != NULL)
  {
    Mock.print_possible_CallbackFunctionPointer(Mock.print_possible_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void print_possible_CMockIgnore(void)
{
  Mock.print_possible_IgnoreBool = (char)1;
}

void print_possible_CMockStopIgnore(void)
{
  Mock.print_possible_IgnoreBool = (char)0;
}

void print_possible_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_print_possible_CALL_INSTANCE));
  CMOCK_print_possible_CALL_INSTANCE* cmock_call_instance = (CMOCK_print_possible_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.print_possible_CallInstance = CMock_Guts_MemChain(Mock.print_possible_CallInstance, cmock_guts_index);
  Mock.print_possible_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void print_possible_AddCallback(CMOCK_print_possible_CALLBACK Callback)
{
  Mock.print_possible_IgnoreBool = (char)0;
  Mock.print_possible_CallbackBool = (char)1;
  Mock.print_possible_CallbackFunctionPointer = Callback;
}

void print_possible_Stub(CMOCK_print_possible_CALLBACK Callback)
{
  Mock.print_possible_IgnoreBool = (char)0;
  Mock.print_possible_CallbackBool = (char)0;
  Mock.print_possible_CallbackFunctionPointer = Callback;
}

void consume_buffer(char* buffer)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_consume_buffer_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_consume_buffer);
  cmock_call_instance = (CMOCK_consume_buffer_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.consume_buffer_CallInstance);
  Mock.consume_buffer_CallInstance = CMock_Guts_MemNext(Mock.consume_buffer_CallInstance);
  if (Mock.consume_buffer_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.consume_buffer_CallbackBool &&
      Mock.consume_buffer_CallbackFunctionPointer != NULL)
  {
    Mock.consume_buffer_CallbackFunctionPointer(buffer, Mock.consume_buffer_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_consume_buffer,CMockString_buffer);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_buffer, buffer, cmock_line, CMockStringMismatch);
  }
  if (Mock.consume_buffer_CallbackFunctionPointer != NULL)
  {
    Mock.consume_buffer_CallbackFunctionPointer(buffer, Mock.consume_buffer_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_consume_buffer(CMOCK_consume_buffer_CALL_INSTANCE* cmock_call_instance, char* buffer);
void CMockExpectParameters_consume_buffer(CMOCK_consume_buffer_CALL_INSTANCE* cmock_call_instance, char* buffer)
{
  cmock_call_instance->Expected_buffer = buffer;
}

void consume_buffer_CMockIgnore(void)
{
  Mock.consume_buffer_IgnoreBool = (char)1;
}

void consume_buffer_CMockStopIgnore(void)
{
  Mock.consume_buffer_IgnoreBool = (char)0;
}

void consume_buffer_CMockExpect(UNITY_LINE_TYPE cmock_line, char* buffer)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_consume_buffer_CALL_INSTANCE));
  CMOCK_consume_buffer_CALL_INSTANCE* cmock_call_instance = (CMOCK_consume_buffer_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.consume_buffer_CallInstance = CMock_Guts_MemChain(Mock.consume_buffer_CallInstance, cmock_guts_index);
  Mock.consume_buffer_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_consume_buffer(cmock_call_instance, buffer);
}

void consume_buffer_AddCallback(CMOCK_consume_buffer_CALLBACK Callback)
{
  Mock.consume_buffer_IgnoreBool = (char)0;
  Mock.consume_buffer_CallbackBool = (char)1;
  Mock.consume_buffer_CallbackFunctionPointer = Callback;
}

void consume_buffer_Stub(CMOCK_consume_buffer_CALLBACK Callback)
{
  Mock.consume_buffer_IgnoreBool = (char)0;
  Mock.consume_buffer_CallbackBool = (char)0;
  Mock.consume_buffer_CallbackFunctionPointer = Callback;
}

int ask_num(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_ask_num_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_ask_num);
  cmock_call_instance = (CMOCK_ask_num_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.ask_num_CallInstance);
  Mock.ask_num_CallInstance = CMock_Guts_MemNext(Mock.ask_num_CallInstance);
  if (Mock.ask_num_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.ask_num_FinalReturn;
    Mock.ask_num_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.ask_num_CallbackBool &&
      Mock.ask_num_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.ask_num_CallbackFunctionPointer(Mock.ask_num_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.ask_num_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.ask_num_CallbackFunctionPointer(Mock.ask_num_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void ask_num_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ask_num_CALL_INSTANCE));
  CMOCK_ask_num_CALL_INSTANCE* cmock_call_instance = (CMOCK_ask_num_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ask_num_CallInstance = CMock_Guts_MemChain(Mock.ask_num_CallInstance, cmock_guts_index);
  Mock.ask_num_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.ask_num_IgnoreBool = (char)1;
}

void ask_num_CMockStopIgnore(void)
{
  if(Mock.ask_num_IgnoreBool)
    Mock.ask_num_CallInstance = CMock_Guts_MemNext(Mock.ask_num_CallInstance);
  Mock.ask_num_IgnoreBool = (char)0;
}

void ask_num_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ask_num_CALL_INSTANCE));
  CMOCK_ask_num_CALL_INSTANCE* cmock_call_instance = (CMOCK_ask_num_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ask_num_CallInstance = CMock_Guts_MemChain(Mock.ask_num_CallInstance, cmock_guts_index);
  Mock.ask_num_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void ask_num_AddCallback(CMOCK_ask_num_CALLBACK Callback)
{
  Mock.ask_num_IgnoreBool = (char)0;
  Mock.ask_num_CallbackBool = (char)1;
  Mock.ask_num_CallbackFunctionPointer = Callback;
}

void ask_num_Stub(CMOCK_ask_num_CALLBACK Callback)
{
  Mock.ask_num_IgnoreBool = (char)0;
  Mock.ask_num_CallbackBool = (char)0;
  Mock.ask_num_CallbackFunctionPointer = Callback;
}

char* ask_input(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_ask_input_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_ask_input);
  cmock_call_instance = (CMOCK_ask_input_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.ask_input_CallInstance);
  Mock.ask_input_CallInstance = CMock_Guts_MemNext(Mock.ask_input_CallInstance);
  if (Mock.ask_input_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.ask_input_FinalReturn;
    Mock.ask_input_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.ask_input_CallbackBool &&
      Mock.ask_input_CallbackFunctionPointer != NULL)
  {
    char* cmock_cb_ret = Mock.ask_input_CallbackFunctionPointer(Mock.ask_input_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.ask_input_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.ask_input_CallbackFunctionPointer(Mock.ask_input_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void ask_input_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ask_input_CALL_INSTANCE));
  CMOCK_ask_input_CALL_INSTANCE* cmock_call_instance = (CMOCK_ask_input_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ask_input_CallInstance = CMock_Guts_MemChain(Mock.ask_input_CallInstance, cmock_guts_index);
  Mock.ask_input_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.ask_input_IgnoreBool = (char)1;
}

void ask_input_CMockStopIgnore(void)
{
  if(Mock.ask_input_IgnoreBool)
    Mock.ask_input_CallInstance = CMock_Guts_MemNext(Mock.ask_input_CallInstance);
  Mock.ask_input_IgnoreBool = (char)0;
}

void ask_input_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ask_input_CALL_INSTANCE));
  CMOCK_ask_input_CALL_INSTANCE* cmock_call_instance = (CMOCK_ask_input_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ask_input_CallInstance = CMock_Guts_MemChain(Mock.ask_input_CallInstance, cmock_guts_index);
  Mock.ask_input_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void ask_input_AddCallback(CMOCK_ask_input_CALLBACK Callback)
{
  Mock.ask_input_IgnoreBool = (char)0;
  Mock.ask_input_CallbackBool = (char)1;
  Mock.ask_input_CallbackFunctionPointer = Callback;
}

void ask_input_Stub(CMOCK_ask_input_CALLBACK Callback)
{
  Mock.ask_input_IgnoreBool = (char)0;
  Mock.ask_input_CallbackBool = (char)0;
  Mock.ask_input_CallbackFunctionPointer = Callback;
}

struct Person* ask_address_input(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_ask_address_input_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_ask_address_input);
  cmock_call_instance = (CMOCK_ask_address_input_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.ask_address_input_CallInstance);
  Mock.ask_address_input_CallInstance = CMock_Guts_MemNext(Mock.ask_address_input_CallInstance);
  if (Mock.ask_address_input_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.ask_address_input_FinalReturn;
    Mock.ask_address_input_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.ask_address_input_CallbackBool &&
      Mock.ask_address_input_CallbackFunctionPointer != NULL)
  {
    struct Person* cmock_cb_ret = Mock.ask_address_input_CallbackFunctionPointer(Mock.ask_address_input_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.ask_address_input_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.ask_address_input_CallbackFunctionPointer(Mock.ask_address_input_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void ask_address_input_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ask_address_input_CALL_INSTANCE));
  CMOCK_ask_address_input_CALL_INSTANCE* cmock_call_instance = (CMOCK_ask_address_input_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ask_address_input_CallInstance = CMock_Guts_MemChain(Mock.ask_address_input_CallInstance, cmock_guts_index);
  Mock.ask_address_input_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.ask_address_input_IgnoreBool = (char)1;
}

void ask_address_input_CMockStopIgnore(void)
{
  if(Mock.ask_address_input_IgnoreBool)
    Mock.ask_address_input_CallInstance = CMock_Guts_MemNext(Mock.ask_address_input_CallInstance);
  Mock.ask_address_input_IgnoreBool = (char)0;
}

void ask_address_input_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ask_address_input_CALL_INSTANCE));
  CMOCK_ask_address_input_CALL_INSTANCE* cmock_call_instance = (CMOCK_ask_address_input_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ask_address_input_CallInstance = CMock_Guts_MemChain(Mock.ask_address_input_CallInstance, cmock_guts_index);
  Mock.ask_address_input_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void ask_address_input_AddCallback(CMOCK_ask_address_input_CALLBACK Callback)
{
  Mock.ask_address_input_IgnoreBool = (char)0;
  Mock.ask_address_input_CallbackBool = (char)1;
  Mock.ask_address_input_CallbackFunctionPointer = Callback;
}

void ask_address_input_Stub(CMOCK_ask_address_input_CALLBACK Callback)
{
  Mock.ask_address_input_IgnoreBool = (char)0;
  Mock.ask_address_input_CallbackBool = (char)0;
  Mock.ask_address_input_CallbackFunctionPointer = Callback;
}

void do_task(struct Person** list, int task)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_do_task_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_do_task);
  cmock_call_instance = (CMOCK_do_task_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.do_task_CallInstance);
  Mock.do_task_CallInstance = CMock_Guts_MemNext(Mock.do_task_CallInstance);
  if (Mock.do_task_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.do_task_CallbackBool &&
      Mock.do_task_CallbackFunctionPointer != NULL)
  {
    Mock.do_task_CallbackFunctionPointer(list, task, Mock.do_task_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_do_task,CMockString_list);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_list, list, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_do_task,CMockString_task);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_task, task, cmock_line, CMockStringMismatch);
  }
  if (Mock.do_task_CallbackFunctionPointer != NULL)
  {
    Mock.do_task_CallbackFunctionPointer(list, task, Mock.do_task_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_do_task(CMOCK_do_task_CALL_INSTANCE* cmock_call_instance, struct Person** list, int task);
void CMockExpectParameters_do_task(CMOCK_do_task_CALL_INSTANCE* cmock_call_instance, struct Person** list, int task)
{
  cmock_call_instance->Expected_list = list;
  cmock_call_instance->Expected_task = task;
}

void do_task_CMockIgnore(void)
{
  Mock.do_task_IgnoreBool = (char)1;
}

void do_task_CMockStopIgnore(void)
{
  Mock.do_task_IgnoreBool = (char)0;
}

void do_task_CMockExpect(UNITY_LINE_TYPE cmock_line, struct Person** list, int task)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_do_task_CALL_INSTANCE));
  CMOCK_do_task_CALL_INSTANCE* cmock_call_instance = (CMOCK_do_task_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.do_task_CallInstance = CMock_Guts_MemChain(Mock.do_task_CallInstance, cmock_guts_index);
  Mock.do_task_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_do_task(cmock_call_instance, list, task);
}

void do_task_AddCallback(CMOCK_do_task_CALLBACK Callback)
{
  Mock.do_task_IgnoreBool = (char)0;
  Mock.do_task_CallbackBool = (char)1;
  Mock.do_task_CallbackFunctionPointer = Callback;
}

void do_task_Stub(CMOCK_do_task_CALLBACK Callback)
{
  Mock.do_task_IgnoreBool = (char)0;
  Mock.do_task_CallbackBool = (char)0;
  Mock.do_task_CallbackFunctionPointer = Callback;
}
