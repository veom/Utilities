#include "stdafx.h"
#include "CppUnitTest.h"
#include "LinkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UtilitiesTest
{		
	TEST_CLASS(LinkedListTest)
	{
	public:
		
		TEST_METHOD(Add_One_Item)
		{
			Utilities::LinkedList<int> list = Utilities::LinkedList<int>();
			int* a = new int(1);

			list.add(a);

			Assert::AreEqual(1, *list[0]);
		}
		
		TEST_METHOD(Add_Two_Items)
		{
			Utilities::LinkedList<int> list = Utilities::LinkedList<int>();
			int* a = new int(1);
			int* b = new int(2);

			list.add(a);
			list.add(b);

			Assert::AreEqual(1, *list[0]);
			Assert::AreEqual(2, *list[1]);
		}

		TEST_METHOD(Remove_Item)
		{
			Utilities::LinkedList<int> list = Utilities::LinkedList<int>();
			int* a = new int(1);

			list.add(a);
			list.remove(0);
			
			Assert::AreEqual(0, list.length());
		}

		TEST_METHOD(Remove_Middle_Item)
		{
			Utilities::LinkedList<int> list = Utilities::LinkedList<int>();


			list.add(new int(1));
			list.add(new int(2));
			list.add(new int(3));
			list.remove(1);

			Assert::AreEqual(2, list.length());
			Assert::AreEqual(1, *list[0]);
			Assert::AreEqual(3, *list[1]);
		}
		
		TEST_METHOD(Length_One_Item)
		{
			Utilities::LinkedList<int> list = Utilities::LinkedList<int>();

			list.add(new int(1));

			Assert::AreEqual(1, list.length());
		}

		TEST_METHOD(Length_Five_Items)
		{
			Utilities::LinkedList<int> list = Utilities::LinkedList<int>();

			list.add(new int(1));
			list.add(new int(2));
			list.add(new int(3));
			list.add(new int(4));
			list.add(new int(5));

			Assert::AreEqual(5, list.length());
		}

		TEST_METHOD(Add_Five_Thosand_Items)
		{
			Utilities::LinkedList<int> list = Utilities::LinkedList<int>();

			for (int i = 0; i < 5000; i++)
			{
				list.add(new int(i));
			}

			Assert::AreEqual(5000, list.length());
		}
	};
}