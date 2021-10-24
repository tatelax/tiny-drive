#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x00000009 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x0000000A System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000011 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ConcatIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001A TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C System.Collections.Generic.Dictionary`2<TKey,TSource> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000001D System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000020 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000022 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 TSource System.Linq.Enumerable::LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000025 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000028 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000029 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000002C System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000002E System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002F System.Single System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Single>)
extern void Enumerable_Sum_mDD75BD20F3C911C6B98B55E45061EE95A569E4B7 (void);
// 0x00000030 System.Single System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Single>)
// 0x00000031 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000032 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000035 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000036 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000003A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000003B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000003C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000003E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000049 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000004B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000004C System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000004E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004F System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000052 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000053 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000054 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000056 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000057 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000058 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000059 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000005A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000005B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000005C System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::.ctor(System.Int32)
// 0x0000005D System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.IDisposable.Dispose()
// 0x0000005E System.Boolean System.Linq.Enumerable/<SelectIterator>d__5`2::MoveNext()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::<>m__Finally1()
// 0x00000060 TResult System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000061 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000064 System.Collections.IEnumerator System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000066 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000067 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000068 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000069 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000006A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000006B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000006C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000006D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000006E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000006F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000074 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000075 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000076 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000077 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000078 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000079 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000007A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007B System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007C System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::.ctor(System.Int32)
// 0x0000007D System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.IDisposable.Dispose()
// 0x0000007E System.Boolean System.Linq.Enumerable/<ConcatIterator>d__59`1::MoveNext()
// 0x0000007F System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally1()
// 0x00000080 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally2()
// 0x00000081 TSource System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000082 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.Reset()
// 0x00000083 System.Object System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.get_Current()
// 0x00000084 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000085 System.Collections.IEnumerator System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000086 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000087 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000088 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000089 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000008A TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000008B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000008C System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000008D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000008E System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008F System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x00000090 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x00000091 System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x00000092 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x00000093 TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000094 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x00000095 System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x00000096 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000097 System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000098 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000099 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000009A System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x0000009B System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x0000009C TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000009D System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000009E System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000009F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x000000A0 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A1 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x000000A2 System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x000000A3 System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x000000A4 System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x000000A5 TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x000000A6 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A7 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x000000A8 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x000000A9 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x000000AA System.Void System.Linq.Set`1::Resize()
// 0x000000AB System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000AC System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000AD System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AE System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000AF System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000B0 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000B1 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000B2 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000B3 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000B4 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000B5 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000B6 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000B7 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000B8 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B9 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000BA System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000BB System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000BC System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000BD System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000BE System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000BF System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000C0 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000C1 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000C2 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000C3 System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32*,System.Int32)
extern void BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80 (void);
// 0x000000C4 System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32[],System.Int32)
extern void BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB (void);
// 0x000000C5 System.Void System.Collections.Generic.BitHelper::MarkBit(System.Int32)
extern void BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B (void);
// 0x000000C6 System.Boolean System.Collections.Generic.BitHelper::IsMarked(System.Int32)
extern void BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608 (void);
// 0x000000C7 System.Int32 System.Collections.Generic.BitHelper::ToIntArrayLength(System.Int32)
extern void BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3 (void);
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000CF System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000D0 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000D1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000D2 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000D3 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000D4 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000D5 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000D6 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000D7 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000D8 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000D9 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000DA System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000DB System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000DC System.Void System.Collections.Generic.HashSet`1::IntersectWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000DD System.Boolean System.Collections.Generic.HashSet`1::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000DE System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000DF System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000E0 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000E1 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000E2 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000E3 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000E4 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000E5 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000E6 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000E7 System.Boolean System.Collections.Generic.HashSet`1::ContainsAllElements(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000E8 System.Void System.Collections.Generic.HashSet`1::IntersectWithHashSetWithSameEC(System.Collections.Generic.HashSet`1<T>)
// 0x000000E9 System.Void System.Collections.Generic.HashSet`1::IntersectWithEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000EA System.Int32 System.Collections.Generic.HashSet`1::InternalIndexOf(T)
// 0x000000EB System.Collections.Generic.HashSet`1/ElementCount<T> System.Collections.Generic.HashSet`1::CheckUniqueAndUnfoundElements(System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
// 0x000000EC System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000ED System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000EE System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000EF System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000F0 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000F1 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000F2 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000F3 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[243] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_mDD75BD20F3C911C6B98B55E45061EE95A569E4B7,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80,
	BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB,
	BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B,
	BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608,
	BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[243] = 
{
	8153,
	8153,
	8407,
	8407,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	8242,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2036,
	2420,
	4296,
	3637,
	8010,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[78] = 
{
	{ 0x02000004, { 124, 4 } },
	{ 0x02000005, { 128, 9 } },
	{ 0x02000006, { 139, 7 } },
	{ 0x02000007, { 148, 10 } },
	{ 0x02000008, { 160, 11 } },
	{ 0x02000009, { 174, 9 } },
	{ 0x0200000A, { 186, 12 } },
	{ 0x0200000B, { 201, 9 } },
	{ 0x0200000C, { 210, 1 } },
	{ 0x0200000D, { 211, 2 } },
	{ 0x0200000E, { 213, 12 } },
	{ 0x0200000F, { 225, 8 } },
	{ 0x02000010, { 233, 9 } },
	{ 0x02000011, { 242, 11 } },
	{ 0x02000012, { 253, 11 } },
	{ 0x02000013, { 264, 6 } },
	{ 0x02000014, { 270, 2 } },
	{ 0x02000015, { 272, 4 } },
	{ 0x02000016, { 276, 3 } },
	{ 0x02000018, { 279, 8 } },
	{ 0x0200001A, { 287, 3 } },
	{ 0x0200001B, { 292, 5 } },
	{ 0x0200001C, { 297, 7 } },
	{ 0x0200001D, { 304, 3 } },
	{ 0x0200001E, { 307, 7 } },
	{ 0x0200001F, { 314, 4 } },
	{ 0x02000021, { 318, 43 } },
	{ 0x02000024, { 361, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 1 } },
	{ 0x06000008, { 21, 2 } },
	{ 0x06000009, { 23, 5 } },
	{ 0x0600000A, { 28, 5 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 1 } },
	{ 0x0600000E, { 37, 2 } },
	{ 0x0600000F, { 39, 2 } },
	{ 0x06000010, { 41, 2 } },
	{ 0x06000011, { 43, 1 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 1 } },
	{ 0x06000017, { 51, 2 } },
	{ 0x06000018, { 53, 1 } },
	{ 0x06000019, { 54, 5 } },
	{ 0x0600001A, { 59, 3 } },
	{ 0x0600001B, { 62, 2 } },
	{ 0x0600001C, { 64, 3 } },
	{ 0x0600001D, { 67, 7 } },
	{ 0x0600001E, { 74, 2 } },
	{ 0x0600001F, { 76, 2 } },
	{ 0x06000020, { 78, 4 } },
	{ 0x06000021, { 82, 4 } },
	{ 0x06000022, { 86, 3 } },
	{ 0x06000023, { 89, 4 } },
	{ 0x06000024, { 93, 4 } },
	{ 0x06000025, { 97, 3 } },
	{ 0x06000026, { 100, 3 } },
	{ 0x06000027, { 103, 1 } },
	{ 0x06000028, { 104, 1 } },
	{ 0x06000029, { 105, 3 } },
	{ 0x0600002A, { 108, 3 } },
	{ 0x0600002B, { 111, 2 } },
	{ 0x0600002C, { 113, 3 } },
	{ 0x0600002D, { 116, 2 } },
	{ 0x0600002E, { 118, 5 } },
	{ 0x06000030, { 123, 1 } },
	{ 0x06000040, { 137, 2 } },
	{ 0x06000045, { 146, 2 } },
	{ 0x0600004A, { 158, 2 } },
	{ 0x06000050, { 171, 3 } },
	{ 0x06000055, { 183, 3 } },
	{ 0x0600005A, { 198, 3 } },
	{ 0x060000AF, { 290, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[363] = 
{
	{ (Il2CppRGCTXDataType)2, 3745 },
	{ (Il2CppRGCTXDataType)3, 17778 },
	{ (Il2CppRGCTXDataType)2, 6024 },
	{ (Il2CppRGCTXDataType)2, 5318 },
	{ (Il2CppRGCTXDataType)3, 34166 },
	{ (Il2CppRGCTXDataType)2, 3901 },
	{ (Il2CppRGCTXDataType)2, 5325 },
	{ (Il2CppRGCTXDataType)3, 34352 },
	{ (Il2CppRGCTXDataType)2, 5320 },
	{ (Il2CppRGCTXDataType)3, 34185 },
	{ (Il2CppRGCTXDataType)2, 3746 },
	{ (Il2CppRGCTXDataType)3, 17779 },
	{ (Il2CppRGCTXDataType)2, 6061 },
	{ (Il2CppRGCTXDataType)2, 5327 },
	{ (Il2CppRGCTXDataType)3, 34371 },
	{ (Il2CppRGCTXDataType)2, 3928 },
	{ (Il2CppRGCTXDataType)2, 5335 },
	{ (Il2CppRGCTXDataType)3, 35498 },
	{ (Il2CppRGCTXDataType)2, 5331 },
	{ (Il2CppRGCTXDataType)3, 34882 },
	{ (Il2CppRGCTXDataType)3, 41089 },
	{ (Il2CppRGCTXDataType)2, 1233 },
	{ (Il2CppRGCTXDataType)3, 698 },
	{ (Il2CppRGCTXDataType)2, 1214 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)3, 178 },
	{ (Il2CppRGCTXDataType)2, 2334 },
	{ (Il2CppRGCTXDataType)3, 13134 },
	{ (Il2CppRGCTXDataType)2, 1216 },
	{ (Il2CppRGCTXDataType)3, 239 },
	{ (Il2CppRGCTXDataType)3, 240 },
	{ (Il2CppRGCTXDataType)2, 2357 },
	{ (Il2CppRGCTXDataType)3, 13148 },
	{ (Il2CppRGCTXDataType)3, 41095 },
	{ (Il2CppRGCTXDataType)2, 1235 },
	{ (Il2CppRGCTXDataType)3, 721 },
	{ (Il2CppRGCTXDataType)3, 41109 },
	{ (Il2CppRGCTXDataType)2, 1239 },
	{ (Il2CppRGCTXDataType)3, 757 },
	{ (Il2CppRGCTXDataType)2, 4749 },
	{ (Il2CppRGCTXDataType)3, 28373 },
	{ (Il2CppRGCTXDataType)2, 4750 },
	{ (Il2CppRGCTXDataType)3, 28374 },
	{ (Il2CppRGCTXDataType)3, 14944 },
	{ (Il2CppRGCTXDataType)3, 40933 },
	{ (Il2CppRGCTXDataType)2, 1224 },
	{ (Il2CppRGCTXDataType)3, 596 },
	{ (Il2CppRGCTXDataType)3, 40971 },
	{ (Il2CppRGCTXDataType)2, 1226 },
	{ (Il2CppRGCTXDataType)3, 622 },
	{ (Il2CppRGCTXDataType)3, 40980 },
	{ (Il2CppRGCTXDataType)2, 1229 },
	{ (Il2CppRGCTXDataType)3, 649 },
	{ (Il2CppRGCTXDataType)3, 41099 },
	{ (Il2CppRGCTXDataType)3, 11948 },
	{ (Il2CppRGCTXDataType)2, 2190 },
	{ (Il2CppRGCTXDataType)2, 2862 },
	{ (Il2CppRGCTXDataType)2, 3045 },
	{ (Il2CppRGCTXDataType)2, 3190 },
	{ (Il2CppRGCTXDataType)2, 1720 },
	{ (Il2CppRGCTXDataType)3, 4380 },
	{ (Il2CppRGCTXDataType)3, 4381 },
	{ (Il2CppRGCTXDataType)2, 3902 },
	{ (Il2CppRGCTXDataType)3, 18996 },
	{ (Il2CppRGCTXDataType)3, 14961 },
	{ (Il2CppRGCTXDataType)2, 3609 },
	{ (Il2CppRGCTXDataType)3, 41159 },
	{ (Il2CppRGCTXDataType)2, 1869 },
	{ (Il2CppRGCTXDataType)3, 5836 },
	{ (Il2CppRGCTXDataType)2, 2905 },
	{ (Il2CppRGCTXDataType)2, 3057 },
	{ (Il2CppRGCTXDataType)3, 13146 },
	{ (Il2CppRGCTXDataType)3, 13147 },
	{ (Il2CppRGCTXDataType)3, 5837 },
	{ (Il2CppRGCTXDataType)2, 2863 },
	{ (Il2CppRGCTXDataType)3, 40738 },
	{ (Il2CppRGCTXDataType)2, 1222 },
	{ (Il2CppRGCTXDataType)3, 582 },
	{ (Il2CppRGCTXDataType)2, 3489 },
	{ (Il2CppRGCTXDataType)2, 2725 },
	{ (Il2CppRGCTXDataType)2, 2880 },
	{ (Il2CppRGCTXDataType)2, 3048 },
	{ (Il2CppRGCTXDataType)2, 3490 },
	{ (Il2CppRGCTXDataType)2, 2726 },
	{ (Il2CppRGCTXDataType)2, 2881 },
	{ (Il2CppRGCTXDataType)2, 3049 },
	{ (Il2CppRGCTXDataType)2, 2882 },
	{ (Il2CppRGCTXDataType)2, 3050 },
	{ (Il2CppRGCTXDataType)3, 13136 },
	{ (Il2CppRGCTXDataType)2, 3491 },
	{ (Il2CppRGCTXDataType)2, 2727 },
	{ (Il2CppRGCTXDataType)2, 2883 },
	{ (Il2CppRGCTXDataType)2, 3051 },
	{ (Il2CppRGCTXDataType)2, 3492 },
	{ (Il2CppRGCTXDataType)2, 2728 },
	{ (Il2CppRGCTXDataType)2, 2884 },
	{ (Il2CppRGCTXDataType)2, 3052 },
	{ (Il2CppRGCTXDataType)2, 2885 },
	{ (Il2CppRGCTXDataType)2, 3053 },
	{ (Il2CppRGCTXDataType)3, 13137 },
	{ (Il2CppRGCTXDataType)2, 3488 },
	{ (Il2CppRGCTXDataType)2, 2879 },
	{ (Il2CppRGCTXDataType)2, 3047 },
	{ (Il2CppRGCTXDataType)2, 2090 },
	{ (Il2CppRGCTXDataType)2, 2857 },
	{ (Il2CppRGCTXDataType)2, 2858 },
	{ (Il2CppRGCTXDataType)2, 3043 },
	{ (Il2CppRGCTXDataType)3, 13133 },
	{ (Il2CppRGCTXDataType)2, 2856 },
	{ (Il2CppRGCTXDataType)2, 3042 },
	{ (Il2CppRGCTXDataType)3, 13132 },
	{ (Il2CppRGCTXDataType)2, 2724 },
	{ (Il2CppRGCTXDataType)2, 2876 },
	{ (Il2CppRGCTXDataType)2, 2877 },
	{ (Il2CppRGCTXDataType)2, 3046 },
	{ (Il2CppRGCTXDataType)3, 13135 },
	{ (Il2CppRGCTXDataType)2, 2723 },
	{ (Il2CppRGCTXDataType)3, 40942 },
	{ (Il2CppRGCTXDataType)3, 11947 },
	{ (Il2CppRGCTXDataType)2, 2189 },
	{ (Il2CppRGCTXDataType)2, 2860 },
	{ (Il2CppRGCTXDataType)2, 3044 },
	{ (Il2CppRGCTXDataType)2, 3189 },
	{ (Il2CppRGCTXDataType)3, 41017 },
	{ (Il2CppRGCTXDataType)3, 17780 },
	{ (Il2CppRGCTXDataType)3, 17782 },
	{ (Il2CppRGCTXDataType)2, 879 },
	{ (Il2CppRGCTXDataType)3, 17781 },
	{ (Il2CppRGCTXDataType)3, 17790 },
	{ (Il2CppRGCTXDataType)2, 3749 },
	{ (Il2CppRGCTXDataType)2, 5321 },
	{ (Il2CppRGCTXDataType)3, 34186 },
	{ (Il2CppRGCTXDataType)3, 17791 },
	{ (Il2CppRGCTXDataType)2, 2957 },
	{ (Il2CppRGCTXDataType)2, 3101 },
	{ (Il2CppRGCTXDataType)3, 13159 },
	{ (Il2CppRGCTXDataType)3, 40741 },
	{ (Il2CppRGCTXDataType)2, 5332 },
	{ (Il2CppRGCTXDataType)3, 34883 },
	{ (Il2CppRGCTXDataType)3, 17783 },
	{ (Il2CppRGCTXDataType)2, 3748 },
	{ (Il2CppRGCTXDataType)2, 5319 },
	{ (Il2CppRGCTXDataType)3, 34167 },
	{ (Il2CppRGCTXDataType)3, 13158 },
	{ (Il2CppRGCTXDataType)3, 17784 },
	{ (Il2CppRGCTXDataType)3, 40740 },
	{ (Il2CppRGCTXDataType)2, 5328 },
	{ (Il2CppRGCTXDataType)3, 34372 },
	{ (Il2CppRGCTXDataType)3, 17797 },
	{ (Il2CppRGCTXDataType)2, 3750 },
	{ (Il2CppRGCTXDataType)2, 5326 },
	{ (Il2CppRGCTXDataType)3, 34353 },
	{ (Il2CppRGCTXDataType)3, 19071 },
	{ (Il2CppRGCTXDataType)3, 9719 },
	{ (Il2CppRGCTXDataType)3, 13160 },
	{ (Il2CppRGCTXDataType)3, 9718 },
	{ (Il2CppRGCTXDataType)3, 17798 },
	{ (Il2CppRGCTXDataType)3, 40742 },
	{ (Il2CppRGCTXDataType)2, 5336 },
	{ (Il2CppRGCTXDataType)3, 35499 },
	{ (Il2CppRGCTXDataType)3, 17811 },
	{ (Il2CppRGCTXDataType)2, 3752 },
	{ (Il2CppRGCTXDataType)2, 5334 },
	{ (Il2CppRGCTXDataType)3, 34885 },
	{ (Il2CppRGCTXDataType)3, 17812 },
	{ (Il2CppRGCTXDataType)2, 2960 },
	{ (Il2CppRGCTXDataType)2, 3104 },
	{ (Il2CppRGCTXDataType)3, 13164 },
	{ (Il2CppRGCTXDataType)3, 13163 },
	{ (Il2CppRGCTXDataType)2, 5323 },
	{ (Il2CppRGCTXDataType)3, 34188 },
	{ (Il2CppRGCTXDataType)3, 40772 },
	{ (Il2CppRGCTXDataType)2, 5333 },
	{ (Il2CppRGCTXDataType)3, 34884 },
	{ (Il2CppRGCTXDataType)3, 17804 },
	{ (Il2CppRGCTXDataType)2, 3751 },
	{ (Il2CppRGCTXDataType)2, 5330 },
	{ (Il2CppRGCTXDataType)3, 34374 },
	{ (Il2CppRGCTXDataType)3, 13162 },
	{ (Il2CppRGCTXDataType)3, 13161 },
	{ (Il2CppRGCTXDataType)3, 17805 },
	{ (Il2CppRGCTXDataType)2, 5322 },
	{ (Il2CppRGCTXDataType)3, 34187 },
	{ (Il2CppRGCTXDataType)3, 40771 },
	{ (Il2CppRGCTXDataType)2, 5329 },
	{ (Il2CppRGCTXDataType)3, 34373 },
	{ (Il2CppRGCTXDataType)3, 17818 },
	{ (Il2CppRGCTXDataType)2, 3753 },
	{ (Il2CppRGCTXDataType)2, 5338 },
	{ (Il2CppRGCTXDataType)3, 35501 },
	{ (Il2CppRGCTXDataType)3, 19072 },
	{ (Il2CppRGCTXDataType)3, 9721 },
	{ (Il2CppRGCTXDataType)3, 13166 },
	{ (Il2CppRGCTXDataType)3, 13165 },
	{ (Il2CppRGCTXDataType)3, 9720 },
	{ (Il2CppRGCTXDataType)3, 17819 },
	{ (Il2CppRGCTXDataType)2, 5324 },
	{ (Il2CppRGCTXDataType)3, 34189 },
	{ (Il2CppRGCTXDataType)3, 40773 },
	{ (Il2CppRGCTXDataType)2, 5337 },
	{ (Il2CppRGCTXDataType)3, 35500 },
	{ (Il2CppRGCTXDataType)3, 700 },
	{ (Il2CppRGCTXDataType)2, 2946 },
	{ (Il2CppRGCTXDataType)2, 3093 },
	{ (Il2CppRGCTXDataType)3, 13960 },
	{ (Il2CppRGCTXDataType)3, 702 },
	{ (Il2CppRGCTXDataType)2, 1091 },
	{ (Il2CppRGCTXDataType)2, 1234 },
	{ (Il2CppRGCTXDataType)3, 699 },
	{ (Il2CppRGCTXDataType)3, 701 },
	{ (Il2CppRGCTXDataType)3, 13155 },
	{ (Il2CppRGCTXDataType)3, 13156 },
	{ (Il2CppRGCTXDataType)3, 13167 },
	{ (Il2CppRGCTXDataType)3, 724 },
	{ (Il2CppRGCTXDataType)3, 723 },
	{ (Il2CppRGCTXDataType)2, 2949 },
	{ (Il2CppRGCTXDataType)2, 3095 },
	{ (Il2CppRGCTXDataType)3, 13157 },
	{ (Il2CppRGCTXDataType)2, 2969 },
	{ (Il2CppRGCTXDataType)2, 3120 },
	{ (Il2CppRGCTXDataType)3, 726 },
	{ (Il2CppRGCTXDataType)2, 1093 },
	{ (Il2CppRGCTXDataType)2, 1236 },
	{ (Il2CppRGCTXDataType)3, 722 },
	{ (Il2CppRGCTXDataType)3, 725 },
	{ (Il2CppRGCTXDataType)3, 759 },
	{ (Il2CppRGCTXDataType)2, 2952 },
	{ (Il2CppRGCTXDataType)2, 3097 },
	{ (Il2CppRGCTXDataType)3, 761 },
	{ (Il2CppRGCTXDataType)2, 877 },
	{ (Il2CppRGCTXDataType)2, 1240 },
	{ (Il2CppRGCTXDataType)3, 758 },
	{ (Il2CppRGCTXDataType)3, 760 },
	{ (Il2CppRGCTXDataType)3, 598 },
	{ (Il2CppRGCTXDataType)3, 599 },
	{ (Il2CppRGCTXDataType)2, 2937 },
	{ (Il2CppRGCTXDataType)2, 3087 },
	{ (Il2CppRGCTXDataType)3, 601 },
	{ (Il2CppRGCTXDataType)2, 869 },
	{ (Il2CppRGCTXDataType)2, 1225 },
	{ (Il2CppRGCTXDataType)3, 597 },
	{ (Il2CppRGCTXDataType)3, 600 },
	{ (Il2CppRGCTXDataType)3, 624 },
	{ (Il2CppRGCTXDataType)2, 4947 },
	{ (Il2CppRGCTXDataType)3, 31960 },
	{ (Il2CppRGCTXDataType)2, 2940 },
	{ (Il2CppRGCTXDataType)2, 3089 },
	{ (Il2CppRGCTXDataType)3, 31961 },
	{ (Il2CppRGCTXDataType)3, 626 },
	{ (Il2CppRGCTXDataType)2, 871 },
	{ (Il2CppRGCTXDataType)2, 1227 },
	{ (Il2CppRGCTXDataType)3, 623 },
	{ (Il2CppRGCTXDataType)3, 625 },
	{ (Il2CppRGCTXDataType)3, 651 },
	{ (Il2CppRGCTXDataType)2, 4949 },
	{ (Il2CppRGCTXDataType)3, 31962 },
	{ (Il2CppRGCTXDataType)2, 2943 },
	{ (Il2CppRGCTXDataType)2, 3091 },
	{ (Il2CppRGCTXDataType)3, 31963 },
	{ (Il2CppRGCTXDataType)3, 653 },
	{ (Il2CppRGCTXDataType)2, 873 },
	{ (Il2CppRGCTXDataType)2, 1230 },
	{ (Il2CppRGCTXDataType)3, 650 },
	{ (Il2CppRGCTXDataType)3, 652 },
	{ (Il2CppRGCTXDataType)3, 584 },
	{ (Il2CppRGCTXDataType)2, 867 },
	{ (Il2CppRGCTXDataType)3, 586 },
	{ (Il2CppRGCTXDataType)2, 1223 },
	{ (Il2CppRGCTXDataType)3, 583 },
	{ (Il2CppRGCTXDataType)3, 585 },
	{ (Il2CppRGCTXDataType)2, 6076 },
	{ (Il2CppRGCTXDataType)2, 2091 },
	{ (Il2CppRGCTXDataType)2, 1161 },
	{ (Il2CppRGCTXDataType)3, 1 },
	{ (Il2CppRGCTXDataType)2, 2362 },
	{ (Il2CppRGCTXDataType)3, 13151 },
	{ (Il2CppRGCTXDataType)2, 1171 },
	{ (Il2CppRGCTXDataType)3, 12 },
	{ (Il2CppRGCTXDataType)2, 1171 },
	{ (Il2CppRGCTXDataType)3, 11986 },
	{ (Il2CppRGCTXDataType)2, 2206 },
	{ (Il2CppRGCTXDataType)2, 6187 },
	{ (Il2CppRGCTXDataType)3, 31957 },
	{ (Il2CppRGCTXDataType)3, 31958 },
	{ (Il2CppRGCTXDataType)2, 3206 },
	{ (Il2CppRGCTXDataType)3, 31959 },
	{ (Il2CppRGCTXDataType)2, 774 },
	{ (Il2CppRGCTXDataType)2, 1231 },
	{ (Il2CppRGCTXDataType)3, 672 },
	{ (Il2CppRGCTXDataType)3, 28357 },
	{ (Il2CppRGCTXDataType)2, 4751 },
	{ (Il2CppRGCTXDataType)3, 28375 },
	{ (Il2CppRGCTXDataType)2, 1721 },
	{ (Il2CppRGCTXDataType)3, 4382 },
	{ (Il2CppRGCTXDataType)3, 28363 },
	{ (Il2CppRGCTXDataType)3, 9673 },
	{ (Il2CppRGCTXDataType)2, 918 },
	{ (Il2CppRGCTXDataType)3, 28358 },
	{ (Il2CppRGCTXDataType)2, 4746 },
	{ (Il2CppRGCTXDataType)3, 4596 },
	{ (Il2CppRGCTXDataType)2, 1743 },
	{ (Il2CppRGCTXDataType)2, 2132 },
	{ (Il2CppRGCTXDataType)3, 9682 },
	{ (Il2CppRGCTXDataType)3, 28359 },
	{ (Il2CppRGCTXDataType)3, 9668 },
	{ (Il2CppRGCTXDataType)3, 9669 },
	{ (Il2CppRGCTXDataType)3, 9667 },
	{ (Il2CppRGCTXDataType)3, 9670 },
	{ (Il2CppRGCTXDataType)2, 2128 },
	{ (Il2CppRGCTXDataType)2, 6136 },
	{ (Il2CppRGCTXDataType)3, 13150 },
	{ (Il2CppRGCTXDataType)3, 9672 },
	{ (Il2CppRGCTXDataType)2, 2833 },
	{ (Il2CppRGCTXDataType)3, 9671 },
	{ (Il2CppRGCTXDataType)2, 2731 },
	{ (Il2CppRGCTXDataType)2, 6066 },
	{ (Il2CppRGCTXDataType)2, 2907 },
	{ (Il2CppRGCTXDataType)2, 3059 },
	{ (Il2CppRGCTXDataType)3, 11967 },
	{ (Il2CppRGCTXDataType)2, 2199 },
	{ (Il2CppRGCTXDataType)3, 14475 },
	{ (Il2CppRGCTXDataType)3, 14476 },
	{ (Il2CppRGCTXDataType)2, 2673 },
	{ (Il2CppRGCTXDataType)3, 14479 },
	{ (Il2CppRGCTXDataType)2, 2673 },
	{ (Il2CppRGCTXDataType)3, 14484 },
	{ (Il2CppRGCTXDataType)2, 2733 },
	{ (Il2CppRGCTXDataType)3, 14488 },
	{ (Il2CppRGCTXDataType)3, 14496 },
	{ (Il2CppRGCTXDataType)3, 14495 },
	{ (Il2CppRGCTXDataType)2, 6185 },
	{ (Il2CppRGCTXDataType)3, 14478 },
	{ (Il2CppRGCTXDataType)3, 14477 },
	{ (Il2CppRGCTXDataType)3, 14489 },
	{ (Il2CppRGCTXDataType)2, 3200 },
	{ (Il2CppRGCTXDataType)3, 14486 },
	{ (Il2CppRGCTXDataType)3, 42235 },
	{ (Il2CppRGCTXDataType)2, 2136 },
	{ (Il2CppRGCTXDataType)3, 9704 },
	{ (Il2CppRGCTXDataType)1, 2826 },
	{ (Il2CppRGCTXDataType)2, 6082 },
	{ (Il2CppRGCTXDataType)3, 14485 },
	{ (Il2CppRGCTXDataType)1, 6082 },
	{ (Il2CppRGCTXDataType)1, 3200 },
	{ (Il2CppRGCTXDataType)2, 6185 },
	{ (Il2CppRGCTXDataType)2, 6082 },
	{ (Il2CppRGCTXDataType)2, 2911 },
	{ (Il2CppRGCTXDataType)2, 3063 },
	{ (Il2CppRGCTXDataType)3, 14481 },
	{ (Il2CppRGCTXDataType)3, 14492 },
	{ (Il2CppRGCTXDataType)3, 14491 },
	{ (Il2CppRGCTXDataType)3, 14498 },
	{ (Il2CppRGCTXDataType)3, 14483 },
	{ (Il2CppRGCTXDataType)3, 14480 },
	{ (Il2CppRGCTXDataType)3, 14494 },
	{ (Il2CppRGCTXDataType)3, 14487 },
	{ (Il2CppRGCTXDataType)3, 14482 },
	{ (Il2CppRGCTXDataType)3, 14493 },
	{ (Il2CppRGCTXDataType)3, 14490 },
	{ (Il2CppRGCTXDataType)3, 14497 },
	{ (Il2CppRGCTXDataType)2, 687 },
	{ (Il2CppRGCTXDataType)3, 9722 },
	{ (Il2CppRGCTXDataType)2, 889 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	243,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	78,
	s_rgctxIndices,
	363,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
