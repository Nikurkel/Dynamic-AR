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
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000E TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000012 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000014 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000019 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000023 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000024 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000025 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000027 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000028 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000029 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000032 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000034 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000046 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000047 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000048 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000049 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000004D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000004E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000050 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000051 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000052 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000053 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000054 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000055 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000056 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000057 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000059 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005B System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005C System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000005D System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000005E System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000005F System.Void System.Linq.Set`1::Resize()
// 0x00000060 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000061 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000062 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000063 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000064 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000065 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000068 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000069 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000006A System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000006B System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000006C System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000006D System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000006E System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000006F System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000070 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000071 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000072 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000073 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000074 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000075 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000076 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000077 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000078 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000079 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000007A System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000007C System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000007D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000007E System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000007F System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000080 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000081 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000082 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000083 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000084 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000085 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000086 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000087 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000008A System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000008C System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000008D System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000008E System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000008F System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000091 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000092 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000093 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[147] = 
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
};
static const int32_t s_InvokerIndices[147] = 
{
	4842,
	4842,
	4989,
	4989,
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
};
static const Il2CppTokenRangePair s_rgctxIndices[47] = 
{
	{ 0x02000004, { 72, 4 } },
	{ 0x02000005, { 76, 9 } },
	{ 0x02000006, { 87, 7 } },
	{ 0x02000007, { 96, 10 } },
	{ 0x02000008, { 108, 11 } },
	{ 0x02000009, { 122, 9 } },
	{ 0x0200000A, { 134, 12 } },
	{ 0x0200000B, { 149, 1 } },
	{ 0x0200000C, { 150, 2 } },
	{ 0x0200000D, { 152, 12 } },
	{ 0x0200000E, { 164, 11 } },
	{ 0x02000010, { 175, 8 } },
	{ 0x02000012, { 183, 3 } },
	{ 0x02000013, { 186, 5 } },
	{ 0x02000014, { 191, 7 } },
	{ 0x02000015, { 198, 3 } },
	{ 0x02000016, { 201, 7 } },
	{ 0x02000017, { 208, 4 } },
	{ 0x02000018, { 212, 21 } },
	{ 0x0200001A, { 233, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 3 } },
	{ 0x0600000F, { 41, 2 } },
	{ 0x06000010, { 43, 4 } },
	{ 0x06000011, { 47, 3 } },
	{ 0x06000012, { 50, 3 } },
	{ 0x06000013, { 53, 3 } },
	{ 0x06000014, { 56, 1 } },
	{ 0x06000015, { 57, 3 } },
	{ 0x06000016, { 60, 2 } },
	{ 0x06000017, { 62, 3 } },
	{ 0x06000018, { 65, 2 } },
	{ 0x06000019, { 67, 5 } },
	{ 0x06000029, { 85, 2 } },
	{ 0x0600002E, { 94, 2 } },
	{ 0x06000033, { 106, 2 } },
	{ 0x06000039, { 119, 3 } },
	{ 0x0600003E, { 131, 3 } },
	{ 0x06000043, { 146, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[235] = 
{
	{ (Il2CppRGCTXDataType)2, 2032 },
	{ (Il2CppRGCTXDataType)3, 7869 },
	{ (Il2CppRGCTXDataType)2, 3490 },
	{ (Il2CppRGCTXDataType)2, 3023 },
	{ (Il2CppRGCTXDataType)3, 16288 },
	{ (Il2CppRGCTXDataType)2, 2134 },
	{ (Il2CppRGCTXDataType)2, 3030 },
	{ (Il2CppRGCTXDataType)3, 16327 },
	{ (Il2CppRGCTXDataType)2, 3025 },
	{ (Il2CppRGCTXDataType)3, 16295 },
	{ (Il2CppRGCTXDataType)2, 2033 },
	{ (Il2CppRGCTXDataType)3, 7870 },
	{ (Il2CppRGCTXDataType)2, 3506 },
	{ (Il2CppRGCTXDataType)2, 3032 },
	{ (Il2CppRGCTXDataType)3, 16334 },
	{ (Il2CppRGCTXDataType)2, 2153 },
	{ (Il2CppRGCTXDataType)2, 3040 },
	{ (Il2CppRGCTXDataType)3, 16391 },
	{ (Il2CppRGCTXDataType)2, 3036 },
	{ (Il2CppRGCTXDataType)3, 16360 },
	{ (Il2CppRGCTXDataType)2, 715 },
	{ (Il2CppRGCTXDataType)3, 51 },
	{ (Il2CppRGCTXDataType)3, 52 },
	{ (Il2CppRGCTXDataType)2, 1320 },
	{ (Il2CppRGCTXDataType)3, 6081 },
	{ (Il2CppRGCTXDataType)2, 716 },
	{ (Il2CppRGCTXDataType)3, 63 },
	{ (Il2CppRGCTXDataType)3, 64 },
	{ (Il2CppRGCTXDataType)2, 1329 },
	{ (Il2CppRGCTXDataType)3, 6085 },
	{ (Il2CppRGCTXDataType)3, 18761 },
	{ (Il2CppRGCTXDataType)2, 721 },
	{ (Il2CppRGCTXDataType)3, 97 },
	{ (Il2CppRGCTXDataType)2, 2671 },
	{ (Il2CppRGCTXDataType)3, 13152 },
	{ (Il2CppRGCTXDataType)3, 18739 },
	{ (Il2CppRGCTXDataType)2, 717 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 929 },
	{ (Il2CppRGCTXDataType)3, 1730 },
	{ (Il2CppRGCTXDataType)3, 1731 },
	{ (Il2CppRGCTXDataType)2, 2135 },
	{ (Il2CppRGCTXDataType)3, 8284 },
	{ (Il2CppRGCTXDataType)2, 1951 },
	{ (Il2CppRGCTXDataType)2, 1452 },
	{ (Il2CppRGCTXDataType)2, 1555 },
	{ (Il2CppRGCTXDataType)2, 1642 },
	{ (Il2CppRGCTXDataType)2, 1556 },
	{ (Il2CppRGCTXDataType)2, 1643 },
	{ (Il2CppRGCTXDataType)3, 6083 },
	{ (Il2CppRGCTXDataType)2, 1557 },
	{ (Il2CppRGCTXDataType)2, 1644 },
	{ (Il2CppRGCTXDataType)3, 6084 },
	{ (Il2CppRGCTXDataType)2, 1950 },
	{ (Il2CppRGCTXDataType)2, 1554 },
	{ (Il2CppRGCTXDataType)2, 1641 },
	{ (Il2CppRGCTXDataType)2, 1544 },
	{ (Il2CppRGCTXDataType)2, 1545 },
	{ (Il2CppRGCTXDataType)2, 1638 },
	{ (Il2CppRGCTXDataType)3, 6080 },
	{ (Il2CppRGCTXDataType)2, 1451 },
	{ (Il2CppRGCTXDataType)2, 1552 },
	{ (Il2CppRGCTXDataType)2, 1553 },
	{ (Il2CppRGCTXDataType)2, 1640 },
	{ (Il2CppRGCTXDataType)3, 6082 },
	{ (Il2CppRGCTXDataType)2, 1450 },
	{ (Il2CppRGCTXDataType)3, 18726 },
	{ (Il2CppRGCTXDataType)3, 5347 },
	{ (Il2CppRGCTXDataType)2, 1204 },
	{ (Il2CppRGCTXDataType)2, 1547 },
	{ (Il2CppRGCTXDataType)2, 1639 },
	{ (Il2CppRGCTXDataType)2, 1713 },
	{ (Il2CppRGCTXDataType)3, 7871 },
	{ (Il2CppRGCTXDataType)3, 7873 },
	{ (Il2CppRGCTXDataType)2, 490 },
	{ (Il2CppRGCTXDataType)3, 7872 },
	{ (Il2CppRGCTXDataType)3, 7881 },
	{ (Il2CppRGCTXDataType)2, 2036 },
	{ (Il2CppRGCTXDataType)2, 3026 },
	{ (Il2CppRGCTXDataType)3, 16296 },
	{ (Il2CppRGCTXDataType)3, 7882 },
	{ (Il2CppRGCTXDataType)2, 1598 },
	{ (Il2CppRGCTXDataType)2, 1667 },
	{ (Il2CppRGCTXDataType)3, 6092 },
	{ (Il2CppRGCTXDataType)3, 18712 },
	{ (Il2CppRGCTXDataType)2, 3037 },
	{ (Il2CppRGCTXDataType)3, 16361 },
	{ (Il2CppRGCTXDataType)3, 7874 },
	{ (Il2CppRGCTXDataType)2, 2035 },
	{ (Il2CppRGCTXDataType)2, 3024 },
	{ (Il2CppRGCTXDataType)3, 16289 },
	{ (Il2CppRGCTXDataType)3, 6091 },
	{ (Il2CppRGCTXDataType)3, 7875 },
	{ (Il2CppRGCTXDataType)3, 18711 },
	{ (Il2CppRGCTXDataType)2, 3033 },
	{ (Il2CppRGCTXDataType)3, 16335 },
	{ (Il2CppRGCTXDataType)3, 7888 },
	{ (Il2CppRGCTXDataType)2, 2037 },
	{ (Il2CppRGCTXDataType)2, 3031 },
	{ (Il2CppRGCTXDataType)3, 16328 },
	{ (Il2CppRGCTXDataType)3, 8336 },
	{ (Il2CppRGCTXDataType)3, 4295 },
	{ (Il2CppRGCTXDataType)3, 6093 },
	{ (Il2CppRGCTXDataType)3, 4294 },
	{ (Il2CppRGCTXDataType)3, 7889 },
	{ (Il2CppRGCTXDataType)3, 18713 },
	{ (Il2CppRGCTXDataType)2, 3041 },
	{ (Il2CppRGCTXDataType)3, 16392 },
	{ (Il2CppRGCTXDataType)3, 7902 },
	{ (Il2CppRGCTXDataType)2, 2039 },
	{ (Il2CppRGCTXDataType)2, 3039 },
	{ (Il2CppRGCTXDataType)3, 16363 },
	{ (Il2CppRGCTXDataType)3, 7903 },
	{ (Il2CppRGCTXDataType)2, 1601 },
	{ (Il2CppRGCTXDataType)2, 1670 },
	{ (Il2CppRGCTXDataType)3, 6097 },
	{ (Il2CppRGCTXDataType)3, 6096 },
	{ (Il2CppRGCTXDataType)2, 3028 },
	{ (Il2CppRGCTXDataType)3, 16298 },
	{ (Il2CppRGCTXDataType)3, 18720 },
	{ (Il2CppRGCTXDataType)2, 3038 },
	{ (Il2CppRGCTXDataType)3, 16362 },
	{ (Il2CppRGCTXDataType)3, 7895 },
	{ (Il2CppRGCTXDataType)2, 2038 },
	{ (Il2CppRGCTXDataType)2, 3035 },
	{ (Il2CppRGCTXDataType)3, 16337 },
	{ (Il2CppRGCTXDataType)3, 6095 },
	{ (Il2CppRGCTXDataType)3, 6094 },
	{ (Il2CppRGCTXDataType)3, 7896 },
	{ (Il2CppRGCTXDataType)2, 3027 },
	{ (Il2CppRGCTXDataType)3, 16297 },
	{ (Il2CppRGCTXDataType)3, 18719 },
	{ (Il2CppRGCTXDataType)2, 3034 },
	{ (Il2CppRGCTXDataType)3, 16336 },
	{ (Il2CppRGCTXDataType)3, 7909 },
	{ (Il2CppRGCTXDataType)2, 2040 },
	{ (Il2CppRGCTXDataType)2, 3043 },
	{ (Il2CppRGCTXDataType)3, 16394 },
	{ (Il2CppRGCTXDataType)3, 8337 },
	{ (Il2CppRGCTXDataType)3, 4297 },
	{ (Il2CppRGCTXDataType)3, 6099 },
	{ (Il2CppRGCTXDataType)3, 6098 },
	{ (Il2CppRGCTXDataType)3, 4296 },
	{ (Il2CppRGCTXDataType)3, 7910 },
	{ (Il2CppRGCTXDataType)2, 3029 },
	{ (Il2CppRGCTXDataType)3, 16299 },
	{ (Il2CppRGCTXDataType)3, 18721 },
	{ (Il2CppRGCTXDataType)2, 3042 },
	{ (Il2CppRGCTXDataType)3, 16393 },
	{ (Il2CppRGCTXDataType)3, 6088 },
	{ (Il2CppRGCTXDataType)3, 6089 },
	{ (Il2CppRGCTXDataType)3, 6100 },
	{ (Il2CppRGCTXDataType)3, 100 },
	{ (Il2CppRGCTXDataType)3, 99 },
	{ (Il2CppRGCTXDataType)2, 1593 },
	{ (Il2CppRGCTXDataType)2, 1663 },
	{ (Il2CppRGCTXDataType)3, 6090 },
	{ (Il2CppRGCTXDataType)2, 1607 },
	{ (Il2CppRGCTXDataType)2, 1680 },
	{ (Il2CppRGCTXDataType)3, 102 },
	{ (Il2CppRGCTXDataType)2, 639 },
	{ (Il2CppRGCTXDataType)2, 722 },
	{ (Il2CppRGCTXDataType)3, 98 },
	{ (Il2CppRGCTXDataType)3, 101 },
	{ (Il2CppRGCTXDataType)3, 71 },
	{ (Il2CppRGCTXDataType)2, 2768 },
	{ (Il2CppRGCTXDataType)3, 14719 },
	{ (Il2CppRGCTXDataType)2, 1590 },
	{ (Il2CppRGCTXDataType)2, 1661 },
	{ (Il2CppRGCTXDataType)3, 14720 },
	{ (Il2CppRGCTXDataType)3, 73 },
	{ (Il2CppRGCTXDataType)2, 487 },
	{ (Il2CppRGCTXDataType)2, 718 },
	{ (Il2CppRGCTXDataType)3, 70 },
	{ (Il2CppRGCTXDataType)3, 72 },
	{ (Il2CppRGCTXDataType)3, 5380 },
	{ (Il2CppRGCTXDataType)2, 1218 },
	{ (Il2CppRGCTXDataType)2, 3596 },
	{ (Il2CppRGCTXDataType)3, 14716 },
	{ (Il2CppRGCTXDataType)3, 14717 },
	{ (Il2CppRGCTXDataType)2, 1727 },
	{ (Il2CppRGCTXDataType)3, 14718 },
	{ (Il2CppRGCTXDataType)2, 419 },
	{ (Il2CppRGCTXDataType)2, 719 },
	{ (Il2CppRGCTXDataType)3, 83 },
	{ (Il2CppRGCTXDataType)3, 13142 },
	{ (Il2CppRGCTXDataType)2, 930 },
	{ (Il2CppRGCTXDataType)3, 1732 },
	{ (Il2CppRGCTXDataType)3, 13147 },
	{ (Il2CppRGCTXDataType)3, 4266 },
	{ (Il2CppRGCTXDataType)2, 521 },
	{ (Il2CppRGCTXDataType)3, 13143 },
	{ (Il2CppRGCTXDataType)2, 2668 },
	{ (Il2CppRGCTXDataType)3, 1767 },
	{ (Il2CppRGCTXDataType)2, 945 },
	{ (Il2CppRGCTXDataType)2, 1168 },
	{ (Il2CppRGCTXDataType)3, 4272 },
	{ (Il2CppRGCTXDataType)3, 13144 },
	{ (Il2CppRGCTXDataType)3, 4261 },
	{ (Il2CppRGCTXDataType)3, 4262 },
	{ (Il2CppRGCTXDataType)3, 4260 },
	{ (Il2CppRGCTXDataType)3, 4263 },
	{ (Il2CppRGCTXDataType)2, 1164 },
	{ (Il2CppRGCTXDataType)2, 3555 },
	{ (Il2CppRGCTXDataType)3, 6087 },
	{ (Il2CppRGCTXDataType)3, 4265 },
	{ (Il2CppRGCTXDataType)2, 1527 },
	{ (Il2CppRGCTXDataType)3, 4264 },
	{ (Il2CppRGCTXDataType)2, 1453 },
	{ (Il2CppRGCTXDataType)2, 3509 },
	{ (Il2CppRGCTXDataType)2, 1570 },
	{ (Il2CppRGCTXDataType)2, 1645 },
	{ (Il2CppRGCTXDataType)3, 5363 },
	{ (Il2CppRGCTXDataType)2, 1212 },
	{ (Il2CppRGCTXDataType)3, 6489 },
	{ (Il2CppRGCTXDataType)3, 6490 },
	{ (Il2CppRGCTXDataType)3, 6495 },
	{ (Il2CppRGCTXDataType)2, 1722 },
	{ (Il2CppRGCTXDataType)3, 6492 },
	{ (Il2CppRGCTXDataType)3, 19196 },
	{ (Il2CppRGCTXDataType)2, 1172 },
	{ (Il2CppRGCTXDataType)3, 4285 },
	{ (Il2CppRGCTXDataType)1, 1522 },
	{ (Il2CppRGCTXDataType)2, 3521 },
	{ (Il2CppRGCTXDataType)3, 6491 },
	{ (Il2CppRGCTXDataType)1, 3521 },
	{ (Il2CppRGCTXDataType)1, 1722 },
	{ (Il2CppRGCTXDataType)2, 3594 },
	{ (Il2CppRGCTXDataType)2, 3521 },
	{ (Il2CppRGCTXDataType)3, 6496 },
	{ (Il2CppRGCTXDataType)3, 6494 },
	{ (Il2CppRGCTXDataType)3, 6493 },
	{ (Il2CppRGCTXDataType)2, 355 },
	{ (Il2CppRGCTXDataType)3, 4298 },
	{ (Il2CppRGCTXDataType)2, 500 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	147,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	47,
	s_rgctxIndices,
	235,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
