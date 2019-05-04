#include <gtest.h>
#include"nord.h"
#include"ord.h"
#include"hash.h"
TEST(nord, can_nord_tab)
{
	ASSERT_NO_THROW(nord  a);
}
TEST(ord, can_ord_tab)
{
	ASSERT_NO_THROW(ord  a);
}
TEST(hasht, can_hash_tab)
{
	ASSERT_NO_THROW(hasht  a);
}
TEST(nord, can_ins_nord_tab)
{
	nord  a;
	row f;
	pol p;
	monom m(4, 100);
	p.insert(m);
	f.key = "test";
	f.polinom = p;
	ASSERT_NO_THROW(a.insert(f));
}
TEST(ord, can_ins_ord_tab)
{
	ord  a;
	row f;
	pol p;
	monom m(4, 100);
	p.insert(m);
	f.key = "test";
	f.polinom = p;
	ASSERT_NO_THROW(a.insert(f));
}
TEST(hash, can_ins_hash_tab)
{
	hasht  a;
	row f;
	pol p;
	monom m(4, 100);
	p.insert(m);
	f.key = "test";
	f.polinom = p;
	ASSERT_NO_THROW(a.insert(f));
}
TEST(nord, can_find_nord_tab)
{
	nord  a;
	row f;
	pol p;
	monom m(4, 100);
	p.insert(m);
	f.key = "test";
	f.polinom = p;
	a.insert(f);
	EXPECT_EQ(p, a.find("test"));
}
TEST(ord, can_find_ord_tab)
{
	ord  a;
	row f;
	pol p;
	monom m(4, 100);
	p.insert(m);
	f.key = "test";
	f.polinom = p;
	a.insert(f);
	EXPECT_EQ(p, a.find("test"));
}
TEST(hasht, can_find_hash_tab)
{
	hasht  a;
	row f;
	pol p;
	monom m(4, 100);
	p.insert(m);
	f.key = "test";
	f.polinom = p;
	a.insert(f);
	EXPECT_EQ(p, a.find("test"));
}
TEST(nord, can_del_nord_tab)
{
	nord  a;
	row f;
	pol p;
	monom m(4, 100);
	p.insert(m);
	f.key = "test";
	f.polinom = p;
	a.insert(f);
	ASSERT_NO_THROW(a.del("test"));
}
TEST(ord, can_del_ord_tab)
{
	ord  a;
	row f;
	pol p;
	monom m(4, 100);
	p.insert(m);
	f.key = "test";
	f.polinom = p;
	a.insert(f);
	ASSERT_NO_THROW(a.del("test"));
}
TEST(hasht, can_del_hash_tab)
{
	hasht  a;
	row f;
	pol p;
	monom m(4, 100);
	p.insert(m);
	f.key = "test";
	f.polinom = p;
	a.insert(f);
	ASSERT_NO_THROW(a.del("test"));
}
TEST(nord, can_find_after_del_nord_tab)
{
	nord  a;
	row f, s;
	pol p, p2;
	monom m(4, 100), m2(9, 101);
	p.insert(m);
	p2.insert(m2);
	f.key = "tes";
	f.polinom = p;
	s.key = "test";
	s.polinom = p2;
	a.insert(f);
	a.insert(s);
	a.del("tes");
	EXPECT_EQ(p2, a.find("test"));
}
TEST(ord, can_find_after_del_ord_tab)
{
	ord  a;
	row f, s;
	pol p, p2;
	monom m(4, 100), m2(9, 101);
	p.insert(m);
	p2.insert(m2);
	f.key = "tes";
	f.polinom = p;
	s.key = "test";
	s.polinom = p2;
	a.insert(f);
	a.insert(s);
	a.del("tes");
	EXPECT_EQ(p2, a.find("test"));
}
TEST(hasht, can_find_after_del_hash_tab)
{
	hasht  a;
	row f, s;
	pol p, p2;
	monom m(4, 100), m2(9, 101);
	p.insert(m);
	p2.insert(m2);
	f.key = "tes";
	f.polinom = p;
	s.key = "test";
	s.polinom = p2;
	a.insert(f);
	a.insert(s);
	a.del("tes");
	EXPECT_EQ(p2, a.find("test"));
}