
/* 常量字符串 */
struct __NSConstantStringImpl {
  int *isa;  ///< 指向它所属的类
  int flags; ///< 字符串起始地址
  char *str; ///< 字符串内容
  long long length; ///< 字符串长度
};

__OBJC_RW_DLLIMPORT int __CFConstantStringClassReference[];

/* 5.系统block 数据结构 */
struct __block_impl {
  void *isa;
  int Flags;
  int Reserved;
  void *FuncPtr;
};
// Runtime copy/destroy helper functions (from Block_private.h)
__OBJC_RW_DLLIMPORT void _Block_object_assign(void *, const void *, const int);
__OBJC_RW_DLLIMPORT void _Block_object_dispose(const void *, const int);
__OBJC_RW_DLLIMPORT void *_NSConcreteGlobalBlock[32]; ///< 全局区 block
__OBJC_RW_DLLIMPORT void *_NSConcreteStackBlock[32];  ///< 栈区 block

/* 字符串定义函数 */
#define __OFFSETOFIVAR__(TYPE, MEMBER) ((long long) &((TYPE *)0)->MEMBER)
static __NSConstantStringImpl __NSConstantStringImpl__var_folders_y5_czqql21j0rdg8cphnlz_kr5w0000gn_T_SJConcreteStackBlock_1_899f6a_mi_0 __attribute__ ((section ("__DATA, __cfstring"))) = {__CFConstantStringClassReference,0x000007c8,"Hello Wold!",11};


// @implementation SJConcreteStackBlock_1

/* 3.MyBlock 定义 */
struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0 {
  struct __block_impl impl;//5.系统block 数据结构
  struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0* Desc;//6.1.MyBlock 的属性信息
  __SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0(void *fp, struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0 *desc, int flags=0) {//构造函数
    impl.isa = &_NSConcreteStackBlock;//7.isa指向它所属的类，取栈指针地址 --- 说明是在栈中分配的block
    impl.Flags = flags; //不传值时 默认值为0
    impl.FuncPtr = fp;  //MyBlock 的函数体指针
    Desc = desc;        //MyBlock 的属性信息指针
  }
};

/* MyBlock 的函数体 */
static void __SJConcreteStackBlock_1__concreteStackBlock_1_block_func_0(struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0 *__cself) {
        //取 字符串函数地址，输出其内容
        NSLog((NSString *)&__NSConstantStringImpl__var_folders_y5_czqql21j0rdg8cphnlz_kr5w0000gn_T_SJConcreteStackBlock_1_899f6a_mi_0);
    }

/* 6.MyBlock 的属性信息 */
static struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0 {
  size_t reserved;
  size_t Block_size;
} __SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0_DATA = { 0, sizeof(struct __SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0)};

/* 1.函数入口 */
static void _I_SJConcreteStackBlock_1_concreteStackBlock_1(SJConcreteStackBlock_1 * self, SEL _cmd) {
    void (*MyBlock)(void);//2.MyBlock 声明
    MyBlock = ((void (*)())&__SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0((void *)__SJConcreteStackBlock_1__concreteStackBlock_1_block_func_0, &__SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0_DATA));//3.MyBlock 定义
    ((void (*)(__block_impl *))((__block_impl *)MyBlock)->FuncPtr)((__block_impl *)MyBlock);//4.MyBlock 使用
    /** 3.MyBlock 定义 去掉没用的修饰
     MyBlock = &__SJConcreteStackBlock_1__concreteStackBlock_1_block_impl_0(__SJConcreteStackBlock_1__concreteStackBlock_1_block_func_0,
                                                                            &__SJConcreteStackBlock_1__concreteStackBlock_1_block_desc_0_DATA);
     */
}

// @end
