
struct __NSConstantStringImpl {
  int *isa;
  int flags;
  char *str;
  long long length;

};

__OBJC_RW_DLLIMPORT int __CFConstantStringClassReference[];

struct __block_impl {
  void *isa;
  int Flags;
  int Reserved;
  void *FuncPtr;
};
// Runtime copy/destroy helper functions (from Block_private.h)

__OBJC_RW_DLLIMPORT void _Block_object_assign(void *, const void *, const int);
__OBJC_RW_DLLIMPORT void _Block_object_dispose(const void *, const int);
__OBJC_RW_DLLIMPORT void *_NSConcreteGlobalBlock[32];
__OBJC_RW_DLLIMPORT void *_NSConcreteStackBlock[32];

#define __OFFSETOFIVAR__(TYPE, MEMBER) ((long long) &((TYPE *)0)->MEMBER)
static __NSConstantStringImpl __NSConstantStringImpl__var_folders_y5_czqql21j0rdg8cphnlz_kr5w0000gn_T_SJConcreteStackBlock_1_899f6a_mi_0 __attribute__ ((section ("__DATA, __cfstring"))) = {__CFConstantStringClassReference,0x000007c8,"Hello Wold!",11};


// @implementation SJConcreteStackBlock_1


struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0 {
  struct __block_impl impl;
  struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0* Desc;
  __SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0(void *fp, struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0 *desc, int flags=0) {
    impl.isa = &_NSConcreteStackBlock;
    impl.Flags = flags;
    impl.FuncPtr = fp;
    Desc = desc;
  }
};
static void __SJConcreteStackBlock_1__concreteStackBlock_1_block_func_0(struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0 *__cself) {

        NSLog((NSString *)&__NSConstantStringImpl__var_folders_y5_czqql21j0rdg8cphnlz_kr5w0000gn_T_SJConcreteStackBlock_1_899f6a_mi_0);
    }

static struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0 {
  size_t reserved;
  size_t Block_size;
} __SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0_DATA = { 0, sizeof(struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0)};

static void _I_SJConcreteStackBlock_1_concreteStackBlock_1(SJConcreteStackBlock_1 * self, SEL _cmd) {
    void (*MyBlock)(void);
    MyBlock = ((void (*)())&__SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0((void *)__SJConcreteStackBlock_1__concreteStackBlock_1_block_func_0, &__SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0_DATA));
    ((void (*)(__block_impl *))((__block_impl *)MyBlock)->FuncPtr)((__block_impl *)MyBlock);
}

// @end
