/* generated by Id 1.1 at � */
/* with the command: -I../stage1/ -c perform.st -o ../stage2/perform.o.c */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <setjmp.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/param.h>
#include <assert.h>
#define GC_DLL 1
#include <gc/gc.h>
#if defined(WIN32)
# include <malloc.h>
# include <windows.h>
  typedef HINSTANCE dlhandle_t;
#else
# include <dlfcn.h>
  typedef void *dlhandle_t;
#endif
#ifndef O_BINARY
# define O_BINARY 0
#endif

typedef struct t__object *oop;

struct __send;
typedef oop (*_imp_t)(struct __send *_send, ...);

#include <id/id.h>

static struct __libid *_libid= 0;

#ifdef ID_DEBUG
# define _enter(info) void *__id_debug= _libid->enter(info)
# define _line(lno)			_libid->line(lno)
# define _leave()			_libid->leave(__id_debug)
# define _backtrace()			_libid->backtrace()
#else
# define _enter(info)			(void)info
# define _line(lno)
# define _leave()
# define _backtrace()			"(no debugging information)"
#endif
#define _return			_leave(); return

#define _sendv(MSG, N, RCV, ARG...) ({					\
  struct __send _s= { (MSG), (N), (RCV) };				\
  ((_imp_t)(_libid->bindv(&_s)))(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

#define _superv(TYP, MSG, N, RCV, ARG...) ({	\
  struct __send _s= { (MSG), (N), (TYP) };	\
  _imp_t _imp= _libid->bindv(&_s);		\
  _s.receiver= (RCV);				\
  _imp(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

static oop s_new_5f_= 0;
static oop s_in_perform_with_= 0;
static oop s_in__5fperform_with_= 0;
static oop s_perform_withArguments_= 0;
static oop s_ifTrue_ifFalse_= 0;
static oop s__3c= 0;
static oop s_error_= 0;
static oop s_perform_with0Arguments_= 0;
static oop s_value_5f_= 0;
static oop s_perform_with1Arguments_= 0;
static oop s__5fimport_= 0;
static oop s_perform_with2Arguments_= 0;
static oop s_perform_with3Arguments_= 0;
static oop s_perform_with4Arguments_= 0;
static oop s_perform_with5Arguments_= 0;
static oop s__5fslots= 0;
static oop s__2b= 0;
static oop s_size= 0;
static oop s_perform_= 0;
static oop s__5fperform_= 0;
static oop s_asSelector= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_at_ifAbsent_= 0;
static oop s__5fdebugName= 0;
static oop s_new= 0;
static oop s_size_5f_value_5f_= 0;
static oop s__5fsize= 0;
static oop s__5fstringValue= 0;
static oop s_respondsTo_= 0;
static oop s_findKeyOrNil_= 0;
static oop s__5fvtable= 0;
static oop s_perform_with_= 0;
static oop s__5fperform_w_= 0;
static oop s_perform_with_with_= 0;
static oop s__5fperform_w_w_= 0;
static oop s_perform_with_with_with_= 0;
static oop s__5fperform_w_w_w_= 0;
static oop s_at_= 0;
static oop s_perform_with_with_with_with_= 0;
static oop s__5fperform_w_w_w_w_= 0;
static oop s_perform_with_with_with_with_with_= 0;
static oop s__7e_7e= 0;
static oop s__5fperform_w_w_w_w_w_= 0;
static oop s__5fsizeof= 0;
static oop s_in_perform_= 0;
static oop s_at_put_= 0;
static oop s_in__5fperform_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "new_:", &s_new_5f_ },
  { "in:perform:with:", &s_in_perform_with_ },
  { "in:_perform:with:", &s_in__5fperform_with_ },
  { "perform:withArguments:", &s_perform_withArguments_ },
  { "ifTrue:ifFalse:", &s_ifTrue_ifFalse_ },
  { "<", &s__3c },
  { "error:", &s_error_ },
  { "perform:with0Arguments:", &s_perform_with0Arguments_ },
  { "value_:", &s_value_5f_ },
  { "perform:with1Arguments:", &s_perform_with1Arguments_ },
  { "_import:", &s__5fimport_ },
  { "perform:with2Arguments:", &s_perform_with2Arguments_ },
  { "perform:with3Arguments:", &s_perform_with3Arguments_ },
  { "perform:with4Arguments:", &s_perform_with4Arguments_ },
  { "perform:with5Arguments:", &s_perform_with5Arguments_ },
  { "_slots", &s__5fslots },
  { "+", &s__2b },
  { "size", &s_size },
  { "perform:", &s_perform_ },
  { "_perform:", &s__5fperform_ },
  { "asSelector", &s_asSelector },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "at:ifAbsent:", &s_at_ifAbsent_ },
  { "_debugName", &s__5fdebugName },
  { "new", &s_new },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "_size", &s__5fsize },
  { "_stringValue", &s__5fstringValue },
  { "respondsTo:", &s_respondsTo_ },
  { "findKeyOrNil:", &s_findKeyOrNil_ },
  { "_vtable", &s__5fvtable },
  { "perform:with:", &s_perform_with_ },
  { "_perform:w:", &s__5fperform_w_ },
  { "perform:with:with:", &s_perform_with_with_ },
  { "_perform:w:w:", &s__5fperform_w_w_ },
  { "perform:with:with:with:", &s_perform_with_with_with_ },
  { "_perform:w:w:w:", &s__5fperform_w_w_w_ },
  { "at:", &s_at_ },
  { "perform:with:with:with:with:", &s_perform_with_with_with_with_ },
  { "_perform:w:w:w:w:", &s__5fperform_w_w_w_w_ },
  { "perform:with:with:with:with:with:", &s_perform_with_with_with_with_with_ },
  { "~~", &s__7e_7e },
  { "_perform:w:w:w:w:w:", &s__5fperform_w_w_w_w_w_ },
  { "_sizeof", &s__5fsizeof },
  { "in:perform:", &s_in_perform_ },
  { "at:put:", &s_at_put_ },
  { "in:_perform:", &s_in__5fperform_ },
  { 0, 0 }
};
struct t__object {
  struct _vtable *_vtable[0];
};
struct t__selector {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__elements;
};
struct t__assoc {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t__closure {
  struct _vtable *_vtable[0];
  oop v__method;
  oop v_data;
};
struct t__vector {
  struct _vtable *_vtable[0];
  oop v__size;
};
struct t__vtable {
  struct _vtable *_vtable[0];
  oop v__tally;
  oop v_bindings;
  oop v_delegate;
};
struct t_Object {
  struct _vtable *_vtable[0];
};
struct t_UndefinedObject {
  struct _vtable *_vtable[0];
};
struct t_StaticBlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
};
struct t_BlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
  oop v_outer;
  oop v_state;
  oop v__nlr;
};
struct t_Magnitude {
  struct _vtable *_vtable[0];
};
struct t_Character {
  struct _vtable *_vtable[0];
  oop v_value;
};
struct t_Number {
  struct _vtable *_vtable[0];
};
struct t_Fraction {
  struct _vtable *_vtable[0];
  oop v_numerator;
  oop v_denominator;
};
struct t_Float {
  struct _vtable *_vtable[0];
};
struct t_Integer {
  struct _vtable *_vtable[0];
};
struct t_SmallInteger {
  struct _vtable *_vtable[0];
};
struct t_LargePositiveInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_LargeNegativeInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_Collection {
  struct _vtable *_vtable[0];
};
struct t_SequenceableCollection {
  struct _vtable *_vtable[0];
};
struct t_ArrayedCollection {
  struct _vtable *_vtable[0];
  oop v_size;
};
struct t_Array {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_ImmutableArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_WordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ImmutableWordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_String {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableString {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_Symbol {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_nil {
  struct _vtable *_vtable[0];
};
struct t_true {
  struct _vtable *_vtable[0];
};
struct t_false {
  struct _vtable *_vtable[0];
};
struct t_CharacterTable {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_Set {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_LookupKey {
  struct _vtable *_vtable[0];
  oop v_key;
};
struct t_Association {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t_OrderedCollection {
  struct _vtable *_vtable[0];
  oop v_array;
  oop v_firstIndex;
  oop v_lastIndex;
};
struct t_Dictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_SymbolTable {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_IdentitySet {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_IdentityDictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_SelectorTable {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_PerformWithArgumentsSelectors {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
static oop l_21= 0;
static oop l_22= 0;
static oop l_23= 0;
static oop l_24= 0;
static oop l_25= 0;
static oop l_26= 0;
static oop l_27= 0;
static oop l_29= 0;
static oop l_30= 0;
static oop l_31= 0;
static oop l_34= 0;
static oop l_36= 0;
static oop l_37= 0;
static oop l_39= 0;
static oop l_40= 0;
static oop l_41= 0;
static oop l_43= 0;
static oop l_44= 0;
static oop l_45= 0;
static oop l_46= 0;
static oop l_48= 0;
static oop l_49= 0;
static oop l_50= 0;
static oop l_51= 0;
static oop l_52= 0;
static oop v__object= 0;
static oop v__selector= 0;
static oop v__vector= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_BlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_SmallInteger= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_ImmutableArray= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_Symbol= 0;
static oop v_nil= 0;
static oop v_true= 0;
static oop v_false= 0;
static oop v_Set= 0;
static oop v_LookupKey= 0;
static oop v_Dictionary= 0;
static oop v_IdentityDictionary= 0;
static oop v_SelectorTable= 0;
static oop v_PerformWithArgumentsSelectors= 0;
static oop al_27[6]= {
  
(oop)&l_21,
  
(oop)&l_22,
  
(oop)&l_23,
  
(oop)&l_24,
  
(oop)&l_25,
  
(oop)&l_26
};
static size_t SelectorTable___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_SelectorTable); }
static char *SelectorTable___5fdebugName(oop _closure, oop v_self) { return "SelectorTable"; }
static struct __slotinfo *SelectorTable___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "tally", 0, 4 }, { "array", 4, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info2= { "[] at:", "SelectorTable", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 30, 35, 0 };
static oop b_2(oop v__closure, oop v__self)
 {
  _enter(&__info2);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  _line(32);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* self */
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[3];  /* aSymbol */
  _3= v__selector;
  _4= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[3];  /* aSymbol */
  _line(32);
  _4=_sendv(s__5fsize, 1, _4);
  _5= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[3];  /* aSymbol */
  _line(32);
  _5=_sendv(s__5fstringValue, 1, _5);
  _line(32);
  _3=_sendv(s_size_5f_value_5f_, 3, _3, _4, _5);
  _line(32);
  _1=_sendv(s_at_put_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info1= { "at:", "SelectorTable", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 30, 35, &__info2 };
static oop SelectorTable__at_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol)
 {
  _enter(&__info1);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 6);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  ((oop *)_state1)[2]= v_stateful_self;
  ((oop *)_state1)[1]= v_self;
  ((oop *)_state1)[3]= v_aSymbol;
  _line(30);
  _1= ((oop *)_state1)[1];  /* self */
  _2= ((oop *)_state1)[3];  /* aSymbol */
  /* Scope() */
  /* Scope('aSymbol'->ArgumentVariableNode 'self'->ArgumentVariableNode 'tally'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'array'->SlotVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_2, 0, 0, ((oop *)_state1), 0);
  _line(32);
  _1=_sendv(s_at_ifAbsent_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "asSelector", "Symbol", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 35, 40, &__info1 };
static oop Symbol__asSelector(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info3);
  oop _1= 0;
  oop _2= 0;
  _line(35);
  _1= v_SelectorTable;
  _2= v_self;
  _line(37);
  _1=_sendv(s_at_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "respondsTo:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 40, 45, &__info3 };
static oop Object__respondsTo_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol)
 {
  _enter(&__info4);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(40);
  _1= v_nil;
  _2= v_self;
  _line(42);
  _2=_sendv(s__5fvtable, 1, _2);
  _3= v_SelectorTable;
  _4= v_aSymbol;
  _line(42);
  _3=_sendv(s_at_, 2, _3, _4);
  _line(42);
  _2=_sendv(s_findKeyOrNil_, 2, _2, _3);
  _1= (_1 != _2) ? v_true : v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "perform:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 45, 46, &__info4 };
static oop Object__perform_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol)
 {
  _enter(&__info5);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(45);
  _1= v_self;
  _2= v_SelectorTable;
  _3= v_aSymbol;
  _line(45);
  _2=_sendv(s_at_, 2, _2, _3);
  _line(45);
  _1=_sendv(s__5fperform_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "perform:with:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 46, 47, &__info5 };
static oop Object__perform_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_a)
 {
  _enter(&__info6);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(46);
  _1= v_self;
  _2= v_SelectorTable;
  _3= v_aSymbol;
  _line(46);
  _2=_sendv(s_at_, 2, _2, _3);
  _3= v_a;
  _line(46);
  _1=_sendv(s__5fperform_w_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "perform:with:with:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 47, 48, &__info6 };
static oop Object__perform_with_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_a, oop v_b)
 {
  _enter(&__info7);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(47);
  _1= v_self;
  _2= v_SelectorTable;
  _3= v_aSymbol;
  _line(47);
  _2=_sendv(s_at_, 2, _2, _3);
  _3= v_a;
  _4= v_b;
  _line(47);
  _1=_sendv(s__5fperform_w_w_, 4, _1, _2, _3, _4);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "perform:with:with:with:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 48, 49, &__info7 };
static oop Object__perform_with_with_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_a, oop v_b, oop v_c)
 {
  _enter(&__info8);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  _line(48);
  _1= v_self;
  _2= v_SelectorTable;
  _3= v_aSymbol;
  _line(48);
  _2=_sendv(s_at_, 2, _2, _3);
  _3= v_a;
  _4= v_b;
  _5= v_c;
  _line(48);
  _1=_sendv(s__5fperform_w_w_w_, 5, _1, _2, _3, _4, _5);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info9= { "perform:with:with:with:with:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 49, 50, &__info8 };
static oop Object__perform_with_with_with_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_a, oop v_b, oop v_c, oop v_d)
 {
  _enter(&__info9);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  oop _6= 0;
  _line(49);
  _1= v_self;
  _2= v_SelectorTable;
  _3= v_aSymbol;
  _line(49);
  _2=_sendv(s_at_, 2, _2, _3);
  _3= v_a;
  _4= v_b;
  _5= v_c;
  _6= v_d;
  _line(49);
  _1=_sendv(s__5fperform_w_w_w_w_, 6, _1, _2, _3, _4, _5, _6);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info10= { "perform:with:with:with:with:with:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 50, 52, &__info9 };
static oop Object__perform_with_with_with_with_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_a, oop v_b, oop v_c, oop v_d, oop v_e)
 {
  _enter(&__info10);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  oop _6= 0;
  oop _7= 0;
  _line(50);
  _1= v_self;
  _2= v_SelectorTable;
  _3= v_aSymbol;
  _line(50);
  _2=_sendv(s_at_, 2, _2, _3);
  _3= v_a;
  _4= v_b;
  _5= v_c;
  _6= v_d;
  _7= v_e;
  _line(50);
  _1=_sendv(s__5fperform_w_w_w_w_w_, 7, _1, _2, _3, _4, _5, _6, _7);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info11= { "_perform:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 52, 68, &__info10 };
static oop Object___5fperform_(oop v__closure, oop v_stateful_self, oop v_self, oop v_s)
 {
  _enter(&__info11);
  oop _1= 0;
  _line(52);
 {
# define self ((struct t_Object *)v_self)

#ifdef _sendv
# define V_SEND (struct __send *)v__closure
#else
# define V_SEND v__closure
#endif
#ifdef STAGE1
# define V_SELF v_self
#else
# define V_SELF v_self, v_self
#endif
  struct __closure *c= _libid->bind(v_s, v_self);
  return (c->method)(V_SEND, V_SELF);

# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "_perform:w:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 68, 69, &__info11 };
static oop Object___5fperform_w_(oop v__closure, oop v_stateful_self, oop v_self, oop v_s, oop v_a)
 {
  _enter(&__info12);
  oop _1= 0;
  _line(68);
 {
# define self ((struct t_Object *)v_self)
 struct __closure *c= _libid->bind(v_s, v_self);  return (c->method)(V_SEND, V_SELF, v_a); 
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info13= { "_perform:w:w:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 69, 70, &__info12 };
static oop Object___5fperform_w_w_(oop v__closure, oop v_stateful_self, oop v_self, oop v_s, oop v_a, oop v_b)
 {
  _enter(&__info13);
  oop _1= 0;
  _line(69);
 {
# define self ((struct t_Object *)v_self)
 struct __closure *c= _libid->bind(v_s, v_self);  return (c->method)(V_SEND, V_SELF, v_a, v_b); 
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info14= { "_perform:w:w:w:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 70, 71, &__info13 };
static oop Object___5fperform_w_w_w_(oop v__closure, oop v_stateful_self, oop v_self, oop v_s, oop v_a, oop v_b, oop v_c)
 {
  _enter(&__info14);
  oop _1= 0;
  _line(70);
 {
# define self ((struct t_Object *)v_self)
 struct __closure *c= _libid->bind(v_s, v_self);  return (c->method)(V_SEND, V_SELF, v_a, v_b, v_c); 
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info15= { "_perform:w:w:w:w:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 71, 72, &__info14 };
static oop Object___5fperform_w_w_w_w_(oop v__closure, oop v_stateful_self, oop v_self, oop v_s, oop v_a, oop v_b, oop v_c, oop v_d)
 {
  _enter(&__info15);
  oop _1= 0;
  _line(71);
 {
# define self ((struct t_Object *)v_self)
 struct __closure *c= _libid->bind(v_s, v_self);  return (c->method)(V_SEND, V_SELF, v_a, v_b, v_c, v_d); 
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info16= { "_perform:w:w:w:w:w:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 72, 74, &__info15 };
static oop Object___5fperform_w_w_w_w_w_(oop v__closure, oop v_stateful_self, oop v_self, oop v_s, oop v_a, oop v_b, oop v_c, oop v_d, oop v_e)
 {
  _enter(&__info16);
  oop _1= 0;
  _line(72);
 {
# define self ((struct t_Object *)v_self)
 struct __closure *c= _libid->bind(v_s, v_self);  return (c->method)(V_SEND, V_SELF, v_a, v_b, v_c, v_d, v_e); 
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info17= { "in:perform:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 74, 75, &__info16 };
static oop Object__in_perform_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aType, oop v_aSymbol)
 {
  _enter(&__info17);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(74);
  _1= v_self;
  _2= v_aType;
  _3= v_SelectorTable;
  _4= v_aSymbol;
  _line(74);
  _3=_sendv(s_at_, 2, _3, _4);
  _line(74);
  _1=_sendv(s_in__5fperform_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info18= { "in:perform:with:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 75, 77, &__info17 };
static oop Object__in_perform_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aType, oop v_s, oop v_a)
 {
  _enter(&__info18);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(75);
  _1= v_self;
  _2= v_aType;
  _3= v_SelectorTable;
  _4= v_s;
  _line(75);
  _3=_sendv(s_at_, 2, _3, _4);
  _4= v_a;
  _line(75);
  _1=_sendv(s_in__5fperform_with_, 4, _1, _2, _3, _4);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info19= { "in:_perform:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 77, 79, &__info18 };
static oop Object__in__5fperform_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aType, oop v_s)
 {
  _enter(&__info19);
  oop _1= 0;
  _line(77);
 {
# define self ((struct t_Object *)v_self)
 struct __closure *c= _libid->bind(v_s, v_aType);  return (c->method)(V_SEND, V_SELF); 
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info20= { "in:_perform:with:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 79, 81, &__info19 };
static oop Object__in__5fperform_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aType, oop v_s, oop v_a)
 {
  _enter(&__info20);
  oop _1= 0;
  _line(79);
 {
# define self ((struct t_Object *)v_self)
 struct __closure *c= _libid->bind(v_s, v_aType);  return (c->method)(V_SEND, V_SELF, v_a); 
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static size_t PerformWithArgumentsSelectors___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_PerformWithArgumentsSelectors); }
static char *PerformWithArgumentsSelectors___5fdebugName(oop _closure, oop v_self) { return "PerformWithArgumentsSelectors"; }
static struct __slotinfo *PerformWithArgumentsSelectors___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "size", 0, 4 }, { "_pointers", 4, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info28= { "perform:withArguments:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 92, 100, &__info20 };
static oop Object__perform_withArguments_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_arguments)
 {
  _enter(&__info28);
  oop v_size= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  (void)v_size;
  _line(92);
  /* ifTrue:ifFalse: */
  _1= v_arguments;
  _line(95);
  _1=_sendv(s_size, 1, _1);
  v_size= _1;
  _2= l_29;
  if (1 & (long)_1) {
    _1= (((long)_1 < (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3c, 2, _1, _2);
  if (!_1) goto _l1;
 {
  _1= v_self;
  _2= v_PerformWithArgumentsSelectors;
  _3= l_30;
  _4= v_size;
  {
    int _l= (long)_3 >> 1;
    int _r= (long)_4 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_4) && ((_s ^ (_s << 1)) >= 0))  _3= (oop)(long)(_s << 1 | 1);  else _3= _sendv(s__2b, 2, _3, _4);
  }
  _line(96);
  _2=_sendv(s_at_, 2, _2, _3);
  _3= v_aSymbol;
  _4= v_arguments;
  _line(96);
  _1=_sendv(s_perform_with_with_, 4, _1, _2, _3, _4);
 }
  goto _l2;
 _l1:;
 {
  _1= v_self;
  _2= l_31;
  _line(97);
  _1=_sendv(s_error_, 2, _1, _2);
 }
 _l2:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info32= { "perform:with0Arguments:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 100, 101, &__info28 };
static oop Object__perform_with0Arguments_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_arguments)
 {
  _enter(&__info32);
  oop _1= 0;
  oop _2= 0;
  _line(100);
  _1= v_self;
  _2= v_aSymbol;
  _line(100);
  _1=_sendv(s_perform_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info33= { "perform:with1Arguments:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 101, 102, &__info32 };
static oop Object__perform_with1Arguments_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_arguments)
 {
  _enter(&__info33);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(101);
  _1= v_self;
  _2= v_aSymbol;
  _3= v_arguments;
  _4= l_34;
  _line(101);
  _3=_sendv(s_at_, 2, _3, _4);
  _line(101);
  _1=_sendv(s_perform_with_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info35= { "perform:with2Arguments:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 102, 103, &__info33 };
static oop Object__perform_with2Arguments_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_arguments)
 {
  _enter(&__info35);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  _line(102);
  _1= v_self;
  _2= v_aSymbol;
  _3= v_arguments;
  _4= l_36;
  _line(102);
  _3=_sendv(s_at_, 2, _3, _4);
  _4= v_arguments;
  _5= l_37;
  _line(102);
  _4=_sendv(s_at_, 2, _4, _5);
  _line(102);
  _1=_sendv(s_perform_with_with_, 4, _1, _2, _3, _4);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info38= { "perform:with3Arguments:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 103, 104, &__info35 };
static oop Object__perform_with3Arguments_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_arguments)
 {
  _enter(&__info38);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  oop _6= 0;
  _line(103);
  _1= v_self;
  _2= v_aSymbol;
  _3= v_arguments;
  _4= l_39;
  _line(103);
  _3=_sendv(s_at_, 2, _3, _4);
  _4= v_arguments;
  _5= l_40;
  _line(103);
  _4=_sendv(s_at_, 2, _4, _5);
  _5= v_arguments;
  _6= l_41;
  _line(103);
  _5=_sendv(s_at_, 2, _5, _6);
  _line(103);
  _1=_sendv(s_perform_with_with_with_, 5, _1, _2, _3, _4, _5);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info42= { "perform:with4Arguments:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 104, 106, &__info38 };
static oop Object__perform_with4Arguments_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_arguments)
 {
  _enter(&__info42);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  oop _6= 0;
  oop _7= 0;
  _line(104);
  _1= v_self;
  _2= v_aSymbol;
  _3= v_arguments;
  _4= l_43;
  _line(104);
  _3=_sendv(s_at_, 2, _3, _4);
  _4= v_arguments;
  _5= l_44;
  _line(104);
  _4=_sendv(s_at_, 2, _4, _5);
  _5= v_arguments;
  _6= l_45;
  _line(104);
  _5=_sendv(s_at_, 2, _5, _6);
  _6= v_arguments;
  _7= l_46;
  _line(105);
  _6=_sendv(s_at_, 2, _6, _7);
  _line(104);
  _1=_sendv(s_perform_with_with_with_with_, 6, _1, _2, _3, _4, _5, _6);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info47= { "perform:with5Arguments:", "Object", "/Users/piumarta/src/idst/object/st80/perform.st", 0, 106, 108, &__info42 };
static oop Object__perform_with5Arguments_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aSymbol, oop v_arguments)
 {
  _enter(&__info47);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  oop _6= 0;
  oop _7= 0;
  oop _8= 0;
  _line(106);
  _1= v_self;
  _2= v_aSymbol;
  _3= v_arguments;
  _4= l_48;
  _line(106);
  _3=_sendv(s_at_, 2, _3, _4);
  _4= v_arguments;
  _5= l_49;
  _line(106);
  _4=_sendv(s_at_, 2, _4, _5);
  _5= v_arguments;
  _6= l_50;
  _line(106);
  _5=_sendv(s_at_, 2, _5, _6);
  _6= v_arguments;
  _7= l_51;
  _line(107);
  _6=_sendv(s_at_, 2, _6, _7);
  _7= v_arguments;
  _8= l_52;
  _line(107);
  _7=_sendv(s_at_, 2, _7, _8);
  _line(106);
  _1=_sendv(s_perform_with_with_with_with_with_, 7, _1, _2, _3, _4, _5, _6, _7);
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "perform.st", 0, 0, 0, &__info47 };
void __id__init__perform(struct __libid *__libid)
{
  if (_libid) return;
  if (!(_libid= __libid)) { fprintf(stderr, "init _libid %p\n", __libid);  abort(); }
# define GC_add_roots _libid->gc_addRoots
  GC_INIT();
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _libid->intern(s->name);
  }
  _enter(&__info);
  _libid->infos(&__info, &__info2);

  _sendv(s__5fimport_, 3, _libid->_object, "Symbol", "__id__init__Symbol");
  v__object= _libid->import("_object");
  v__selector= _libid->import("_selector");
  v__vector= _libid->import("_vector");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_BlockClosure= _libid->import("BlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Number= _libid->import("Number");
  v_Integer= _libid->import("Integer");
  v_SmallInteger= _libid->import("SmallInteger");
  v_LargePositiveInteger= _libid->import("LargePositiveInteger");
  v_Collection= _libid->import("Collection");
  v_SequenceableCollection= _libid->import("SequenceableCollection");
  v_ArrayedCollection= _libid->import("ArrayedCollection");
  v_Array= _libid->import("Array");
  v_ImmutableArray= _libid->import("ImmutableArray");
  v_WordArray= _libid->import("WordArray");
  v_ByteArray= _libid->import("ByteArray");
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_Symbol= _libid->import("Symbol");
  v_nil= _libid->import("nil");
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  v_Set= _libid->import("Set");
  v_LookupKey= _libid->import("LookupKey");
  v_Dictionary= _libid->import("Dictionary");
  _sendv(s__5fimport_, 3, _libid->_object, "IdentityDictionary", "__id__init__IdentityDictionary");
  v_IdentityDictionary= _libid->import("IdentityDictionary");
  v_SelectorTable= _libid->proto2(v_IdentityDictionary, SelectorTable___5fsizeof(0, 0));
  _libid->method(v_SelectorTable, s__5fsizeof, (_imp_t)SelectorTable___5fsizeof);
  _libid->method(v_SelectorTable, s__5fdebugName, (_imp_t)SelectorTable___5fdebugName);
  _libid->method(v_SelectorTable, s__5fslots, (_imp_t)SelectorTable___5fslots);
  _libid->export("SelectorTable", v_SelectorTable);
 {
  oop _1= 0;
  _1= v_SelectorTable;
  _line(27);
  _1=_sendv(s_new, 1, _1);
  v_SelectorTable= _1;
  _libid->export("SelectorTable", v_SelectorTable);
 }
  _libid->method(v_SelectorTable, s_at_, (_imp_t)SelectorTable__at_);
  _libid->method(v_Symbol, s_asSelector, (_imp_t)Symbol__asSelector);
  _libid->method(v_Object, s_respondsTo_, (_imp_t)Object__respondsTo_);
  _libid->method(v_Object, s_perform_, (_imp_t)Object__perform_);
  _libid->method(v_Object, s_perform_with_, (_imp_t)Object__perform_with_);
  _libid->method(v_Object, s_perform_with_with_, (_imp_t)Object__perform_with_with_);
  _libid->method(v_Object, s_perform_with_with_with_, (_imp_t)Object__perform_with_with_with_);
  _libid->method(v_Object, s_perform_with_with_with_with_, (_imp_t)Object__perform_with_with_with_with_);
  _libid->method(v_Object, s_perform_with_with_with_with_with_, (_imp_t)Object__perform_with_with_with_with_with_);
  _libid->method(v_Object, s__5fperform_, (_imp_t)Object___5fperform_);
  _libid->method(v_Object, s__5fperform_w_, (_imp_t)Object___5fperform_w_);
  _libid->method(v_Object, s__5fperform_w_w_, (_imp_t)Object___5fperform_w_w_);
  _libid->method(v_Object, s__5fperform_w_w_w_, (_imp_t)Object___5fperform_w_w_w_);
  _libid->method(v_Object, s__5fperform_w_w_w_w_, (_imp_t)Object___5fperform_w_w_w_w_);
  _libid->method(v_Object, s__5fperform_w_w_w_w_w_, (_imp_t)Object___5fperform_w_w_w_w_w_);
  _libid->method(v_Object, s_in_perform_, (_imp_t)Object__in_perform_);
  _libid->method(v_Object, s_in_perform_with_, (_imp_t)Object__in_perform_with_);
  _libid->method(v_Object, s_in__5fperform_, (_imp_t)Object__in__5fperform_);
  _libid->method(v_Object, s_in__5fperform_with_, (_imp_t)Object__in__5fperform_with_);
  v_PerformWithArgumentsSelectors= _libid->proto2(v_Array, PerformWithArgumentsSelectors___5fsizeof(0, 0));
  _libid->method(v_PerformWithArgumentsSelectors, s__5fsizeof, (_imp_t)PerformWithArgumentsSelectors___5fsizeof);
  _libid->method(v_PerformWithArgumentsSelectors, s__5fdebugName, (_imp_t)PerformWithArgumentsSelectors___5fdebugName);
  _libid->method(v_PerformWithArgumentsSelectors, s__5fslots, (_imp_t)PerformWithArgumentsSelectors___5fslots);
  _libid->export("PerformWithArgumentsSelectors", v_PerformWithArgumentsSelectors);
  l_21= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 23, "perform:with0Arguments:");
  l_22= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 23, "perform:with1Arguments:");
  l_23= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 23, "perform:with2Arguments:");
  l_24= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 23, "perform:with3Arguments:");
  l_25= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 23, "perform:with4Arguments:");
  l_26= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 23, "perform:with5Arguments:");
  l_27= _sendv(s_size_5f_value_5f_, 3, v_ImmutableArray, 6, al_27);
 {
  oop _1= 0;
  _1= l_27;
  v_PerformWithArgumentsSelectors= _1;
  _libid->export("PerformWithArgumentsSelectors", v_PerformWithArgumentsSelectors);
 }
  l_29= _sendv(s_value_5f_, 2, v_SmallInteger, 6);
  l_30= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_31= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 61, "perform:withArguments: does not support more than 5 arguments");
  _libid->method(v_Object, s_perform_withArguments_, (_imp_t)Object__perform_withArguments_);
  _libid->method(v_Object, s_perform_with0Arguments_, (_imp_t)Object__perform_with0Arguments_);
  l_34= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_Object, s_perform_with1Arguments_, (_imp_t)Object__perform_with1Arguments_);
  l_36= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_37= _sendv(s_value_5f_, 2, v_SmallInteger, 2);
  _libid->method(v_Object, s_perform_with2Arguments_, (_imp_t)Object__perform_with2Arguments_);
  l_39= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_40= _sendv(s_value_5f_, 2, v_SmallInteger, 2);
  l_41= _sendv(s_value_5f_, 2, v_SmallInteger, 3);
  _libid->method(v_Object, s_perform_with3Arguments_, (_imp_t)Object__perform_with3Arguments_);
  l_43= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_44= _sendv(s_value_5f_, 2, v_SmallInteger, 2);
  l_45= _sendv(s_value_5f_, 2, v_SmallInteger, 3);
  l_46= _sendv(s_value_5f_, 2, v_SmallInteger, 4);
  _libid->method(v_Object, s_perform_with4Arguments_, (_imp_t)Object__perform_with4Arguments_);
  l_48= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_49= _sendv(s_value_5f_, 2, v_SmallInteger, 2);
  l_50= _sendv(s_value_5f_, 2, v_SmallInteger, 3);
  l_51= _sendv(s_value_5f_, 2, v_SmallInteger, 4);
  l_52= _sendv(s_value_5f_, 2, v_SmallInteger, 5);
  _libid->method(v_Object, s_perform_with5Arguments_, (_imp_t)Object__perform_with5Arguments_);
  _leave();
}
