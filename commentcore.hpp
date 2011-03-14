#ifndef commentcore_hpp
#define commentcore_hpp

#define just_one_argument(x) x
#define just_comment just_one_argument()

// comments
#define singleton just_comment
#define interface just_comment
#define delegate just_comment
#define abstract just_comment
#define factory just_comment
#define builder just_comment
#define semi just_comment
#define morphed just_comment
#define methodwalker just_comment
#define state just_comment
#define realization just_comment
#define mainentity just_comment

// set and get magic
#define set(t, v) set##t(v)
#define get(t) get##t()

#endif
