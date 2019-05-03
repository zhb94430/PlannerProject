// A Bison parser, made by GNU Bison 3.3.2.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file src/pddlparser.tab.hh
 ** Define the yy::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.

#ifndef YY_YY_SRC_PDDLPARSER_TAB_HH_INCLUDED
# define YY_YY_SRC_PDDLPARSER_TAB_HH_INCLUDED
// //                    "%code requires" blocks.
#line 12 "src/pddlparser.yy" // lalr1.cc:417

#include <string>
#include <vector>
#include <tuple>

#include "domain.hh"
#include "problem.hh"
#include "action.hh"
#include "predicate.hh"

using StringList    = std::vector<std::string>;
using TypeDict      = std::map<std::string,std::string>;

using ActionList    = std::vector<Action*>;
using PredicateList = std::vector<Predicate*>;
using ParameterList = std::pair<StringList*,TypeDict*>;
using ArgumentList  = std::pair<StringList*,TypeDict*>;

using Literal       = std::pair<Predicate*,bool>;
using LiteralList   = std::vector<Literal*>;
using ActionDefBody = std::pair<LiteralList*,LiteralList*>;

using DomainBody    = struct {
    StringList     *requirements;
    PredicateList  *predicates;
    ActionList     *actions;
};


class PDDLDriver;

#line 80 "src/pddlparser.tab.hh" // lalr1.cc:417

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"
#include <typeinfo>
#ifndef YYASSERT
# include <cassert>
# define YYASSERT assert
#endif


#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif


namespace yy {
#line 196 "src/pddlparser.tab.hh" // lalr1.cc:417



  /// A Bison parser.
  class PDDLParser
  {
  public:
#ifndef YYSTYPE
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class semantic_type
  {
  public:
    /// Type of *this.
    typedef semantic_type self_type;

    /// Empty construction.
    semantic_type () YY_NOEXCEPT
      : yybuffer_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    semantic_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YYASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

    /// Destruction, allowed only if empty.
    ~semantic_type () YY_NOEXCEPT
    {
      YYASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == typeid (T));
      YYASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == typeid (T));
      YYASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
    /// Prohibit blind copies.
    self_type& operator= (const self_type&);
    semantic_type (const self_type&);

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yybuffer_.yyraw;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yybuffer_.yyraw;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // "action-def"
      // action-def
      char dummy1[sizeof (Action*)];

      // "action-def-body"
      // action-def-body
      char dummy2[sizeof (ActionDefBody*)];

      // "actions"
      // actions
      char dummy3[sizeof (ActionList*)];

      // "domain-def"
      // domain-def
      char dummy4[sizeof (Domain*)];

      // "domain-body"
      // domain-body
      char dummy5[sizeof (DomainBody*)];

      // "literal"
      // "grounded-literal"
      // literal
      // grounded-literal
      char dummy6[sizeof (Literal*)];

      // "preconditions-list"
      // "effects-list"
      // "atomic-formula"
      // "literal-list"
      // "grounded-literal-list"
      // "grounded-atomic-formula"
      // "init-def"
      // "goal-def"
      // preconditions-list
      // effects-list
      // init-def
      // goal-def
      // literal-list
      // grounded-literal-list
      // atomic-formula
      // grounded-atomic-formula
      char dummy7[sizeof (LiteralList*)];

      // "parameters-list"
      // parameters-list
      char dummy8[sizeof (ParameterList*)];

      // "predicate"
      // "grounded-predicate"
      // predicate
      // grounded-predicate
      char dummy9[sizeof (Predicate*)];

      // "predicates-def"
      // "predicates-list"
      // predicates-def
      // predicates-list
      char dummy10[sizeof (PredicateList*)];

      // "problem-def"
      // problem-def
      char dummy11[sizeof (Problem*)];

      // "requirements-def"
      // "requirekeys-list"
      // "variables-list"
      // "names-list"
      // "objects-def"
      // requirements-def
      // objects-def
      // requirekeys-list
      // names-list
      // variables-list
      char dummy12[sizeof (StringList*)];

      // "typed-variables-list"
      // "typed-names-list"
      // typed-names-list
      // typed-variables-list
      char dummy13[sizeof (TypeDict*)];

      // "number"
      char dummy14[sizeof (int)];

      // "name"
      // "variable"
      // "requirekey"
      // "domain-name"
      // "problem-name"
      // "domain-reference"
      // domain-name
      // problem-name
      // domain-reference
      char dummy15[sizeof (std::string)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me;
      /// A buffer large enough to store any of the semantic values.
      char yyraw[size];
    } yybuffer_;

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Tokens.
    struct token
    {
      enum yytokentype
      {
        TOK_END = 0,
        TOK_DEFINE = 258,
        TOK_DOMAIN = 259,
        TOK_PROBLEM = 260,
        TOK_REQUIREMENTS = 261,
        TOK_TYPES = 262,
        TOK_CONSTANTS = 263,
        TOK_PREDICATES = 264,
        TOK_ACTION = 265,
        TOK_PARAMETERS = 266,
        TOK_PRECONDITIONS = 267,
        TOK_EFFECTS = 268,
        TOK_AND = 269,
        TOK_NOT = 270,
        TOK_EQUAL = 271,
        TOK_OBJECTS = 272,
        TOK_INIT = 273,
        TOK_GOAL = 274,
        TOK_LPAREN = 275,
        TOK_RPAREN = 276,
        TOK_HYPHEN = 277,
        TOK_NAME = 278,
        TOK_NUMBER = 279,
        TOK_VARIABLE = 280,
        TOK_REQUIREKEY = 281
      };
    };

    /// (External) token type, as returned by yylex.
    typedef token::yytokentype token_type;

    /// Symbol type: an internal symbol number.
    typedef int symbol_number_type;

    /// The symbol type number to denote an empty symbol.
    enum { empty_symbol = -2 };

    /// Internal symbol number for tokens (subsumed by symbol_number_type).
    typedef unsigned char token_number_type;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol type
    /// via type_get ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ()
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that);
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Action*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Action*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ActionDefBody*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ActionDefBody*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ActionList*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ActionList*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Domain*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Domain*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, DomainBody*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const DomainBody*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Literal*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Literal*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, LiteralList*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const LiteralList*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ParameterList*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ParameterList*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Predicate*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Predicate*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, PredicateList*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const PredicateList*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Problem*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Problem*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, StringList*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const StringList*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, TypeDict*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const TypeDict*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, int&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const int& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }

      /// Destroy contents, and record that is empty.
      void clear ()
      {
        // User destructor.
        symbol_number_type yytype = this->type_get ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yytype)
        {
       default:
          break;
        }

        // Type destructor.
switch (yytype)
    {
      case 34: // "action-def"
      case 68: // action-def
        value.template destroy< Action* > ();
        break;

      case 35: // "action-def-body"
      case 71: // action-def-body
        value.template destroy< ActionDefBody* > ();
        break;

      case 33: // "actions"
      case 67: // actions
        value.template destroy< ActionList* > ();
        break;

      case 27: // "domain-def"
      case 60: // domain-def
        value.template destroy< Domain* > ();
        break;

      case 29: // "domain-body"
      case 62: // domain-body
        value.template destroy< DomainBody* > ();
        break;

      case 41: // "literal"
      case 43: // "grounded-literal"
      case 91: // literal
      case 92: // grounded-literal
        value.template destroy< Literal* > ();
        break;

      case 36: // "preconditions-list"
      case 37: // "effects-list"
      case 38: // "atomic-formula"
      case 42: // "literal-list"
      case 44: // "grounded-literal-list"
      case 45: // "grounded-atomic-formula"
      case 56: // "init-def"
      case 57: // "goal-def"
      case 72: // preconditions-list
      case 73: // effects-list
      case 78: // init-def
      case 79: // goal-def
      case 85: // literal-list
      case 86: // grounded-literal-list
      case 87: // atomic-formula
      case 88: // grounded-atomic-formula
        value.template destroy< LiteralList* > ();
        break;

      case 50: // "parameters-list"
      case 70: // parameters-list
        value.template destroy< ParameterList* > ();
        break;

      case 39: // "predicate"
      case 40: // "grounded-predicate"
      case 89: // predicate
      case 90: // grounded-predicate
        value.template destroy< Predicate* > ();
        break;

      case 48: // "predicates-def"
      case 49: // "predicates-list"
      case 66: // predicates-def
      case 69: // predicates-list
        value.template destroy< PredicateList* > ();
        break;

      case 30: // "problem-def"
      case 74: // problem-def
        value.template destroy< Problem* > ();
        break;

      case 46: // "requirements-def"
      case 47: // "requirekeys-list"
      case 52: // "variables-list"
      case 53: // "names-list"
      case 55: // "objects-def"
      case 63: // requirements-def
      case 77: // objects-def
      case 80: // requirekeys-list
      case 81: // names-list
      case 83: // variables-list
        value.template destroy< StringList* > ();
        break;

      case 51: // "typed-variables-list"
      case 54: // "typed-names-list"
      case 82: // typed-names-list
      case 84: // typed-variables-list
        value.template destroy< TypeDict* > ();
        break;

      case 24: // "number"
        value.template destroy< int > ();
        break;

      case 23: // "name"
      case 25: // "variable"
      case 26: // "requirekey"
      case 28: // "domain-name"
      case 31: // "problem-name"
      case 32: // "domain-reference"
      case 61: // domain-name
      case 75: // problem-name
      case 76: // domain-reference
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_type
    {
      /// Default constructor.
      by_type ();

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_type (by_type&& that);
#endif

      /// Copy constructor.
      by_type (const by_type& that);

      /// The symbol type as needed by the constructor.
      typedef token_type kind_type;

      /// Constructor from (external) token numbers.
      by_type (kind_type t);

      /// Record that this symbol is empty.
      void clear ();

      /// Steal the symbol type from \a that.
      void move (by_type& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The token.
      token_type token () const YY_NOEXCEPT;

      /// The symbol type.
      /// \a empty_symbol when empty.
      /// An int, not token_number_type, to be able to store empty_symbol.
      int type;
    };

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_type>
    {
      /// Superclass.
      typedef basic_symbol<by_type> super_type;

      /// Empty symbol.
      symbol_type () {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type(token_type (tok), std::move (l))
      {
        YYASSERT (tok == token::TOK_END || tok == token::TOK_DEFINE || tok == token::TOK_DOMAIN || tok == token::TOK_PROBLEM || tok == token::TOK_REQUIREMENTS || tok == token::TOK_TYPES || tok == token::TOK_CONSTANTS || tok == token::TOK_PREDICATES || tok == token::TOK_ACTION || tok == token::TOK_PARAMETERS || tok == token::TOK_PRECONDITIONS || tok == token::TOK_EFFECTS || tok == token::TOK_AND || tok == token::TOK_NOT || tok == token::TOK_EQUAL || tok == token::TOK_OBJECTS || tok == token::TOK_INIT || tok == token::TOK_GOAL || tok == token::TOK_LPAREN || tok == token::TOK_RPAREN || tok == token::TOK_HYPHEN);
      }
#else
      symbol_type (int tok, const location_type& l)
        : super_type(token_type (tok), l)
      {
        YYASSERT (tok == token::TOK_END || tok == token::TOK_DEFINE || tok == token::TOK_DOMAIN || tok == token::TOK_PROBLEM || tok == token::TOK_REQUIREMENTS || tok == token::TOK_TYPES || tok == token::TOK_CONSTANTS || tok == token::TOK_PREDICATES || tok == token::TOK_ACTION || tok == token::TOK_PARAMETERS || tok == token::TOK_PRECONDITIONS || tok == token::TOK_EFFECTS || tok == token::TOK_AND || tok == token::TOK_NOT || tok == token::TOK_EQUAL || tok == token::TOK_OBJECTS || tok == token::TOK_INIT || tok == token::TOK_GOAL || tok == token::TOK_LPAREN || tok == token::TOK_RPAREN || tok == token::TOK_HYPHEN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, Action* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 289);
      }
#else
      symbol_type (int tok, const Action*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 289);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, ActionDefBody* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 290);
      }
#else
      symbol_type (int tok, const ActionDefBody*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 290);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, ActionList* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 288);
      }
#else
      symbol_type (int tok, const ActionList*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 288);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, Domain* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 282);
      }
#else
      symbol_type (int tok, const Domain*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 282);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, DomainBody* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 284);
      }
#else
      symbol_type (int tok, const DomainBody*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 284);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, Literal* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 296 || tok == 298);
      }
#else
      symbol_type (int tok, const Literal*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 296 || tok == 298);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, LiteralList* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 291 || tok == 292 || tok == 293 || tok == 297 || tok == 299 || tok == 300 || tok == 311 || tok == 312);
      }
#else
      symbol_type (int tok, const LiteralList*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 291 || tok == 292 || tok == 293 || tok == 297 || tok == 299 || tok == 300 || tok == 311 || tok == 312);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, ParameterList* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 305);
      }
#else
      symbol_type (int tok, const ParameterList*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 305);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, Predicate* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 294 || tok == 295);
      }
#else
      symbol_type (int tok, const Predicate*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 294 || tok == 295);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, PredicateList* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 303 || tok == 304);
      }
#else
      symbol_type (int tok, const PredicateList*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 303 || tok == 304);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, Problem* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 285);
      }
#else
      symbol_type (int tok, const Problem*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 285);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, StringList* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 301 || tok == 302 || tok == 307 || tok == 308 || tok == 310);
      }
#else
      symbol_type (int tok, const StringList*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 301 || tok == 302 || tok == 307 || tok == 308 || tok == 310);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, TypeDict* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == 306 || tok == 309);
      }
#else
      symbol_type (int tok, const TypeDict*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == 306 || tok == 309);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, int v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == token::TOK_NUMBER);
      }
#else
      symbol_type (int tok, const int& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == token::TOK_NUMBER);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == token::TOK_NAME || tok == token::TOK_VARIABLE || tok == token::TOK_REQUIREKEY || tok == 283 || tok == 286 || tok == 287);
      }
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == token::TOK_NAME || tok == token::TOK_VARIABLE || tok == token::TOK_REQUIREKEY || tok == 283 || tok == 286 || tok == 287);
      }
#endif
    };

    /// Build a parser object.
    PDDLParser (PDDLDriver& driver_yyarg);
    virtual ~PDDLParser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    // Implementation of make_symbol for each symbol type.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_END (location_type l)
      {
        return symbol_type (token::TOK_END, std::move (l));
      }
#else
      static
      symbol_type
      make_END (const location_type& l)
      {
        return symbol_type (token::TOK_END, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEFINE (location_type l)
      {
        return symbol_type (token::TOK_DEFINE, std::move (l));
      }
#else
      static
      symbol_type
      make_DEFINE (const location_type& l)
      {
        return symbol_type (token::TOK_DEFINE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOMAIN (location_type l)
      {
        return symbol_type (token::TOK_DOMAIN, std::move (l));
      }
#else
      static
      symbol_type
      make_DOMAIN (const location_type& l)
      {
        return symbol_type (token::TOK_DOMAIN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PROBLEM (location_type l)
      {
        return symbol_type (token::TOK_PROBLEM, std::move (l));
      }
#else
      static
      symbol_type
      make_PROBLEM (const location_type& l)
      {
        return symbol_type (token::TOK_PROBLEM, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REQUIREMENTS (location_type l)
      {
        return symbol_type (token::TOK_REQUIREMENTS, std::move (l));
      }
#else
      static
      symbol_type
      make_REQUIREMENTS (const location_type& l)
      {
        return symbol_type (token::TOK_REQUIREMENTS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TYPES (location_type l)
      {
        return symbol_type (token::TOK_TYPES, std::move (l));
      }
#else
      static
      symbol_type
      make_TYPES (const location_type& l)
      {
        return symbol_type (token::TOK_TYPES, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONSTANTS (location_type l)
      {
        return symbol_type (token::TOK_CONSTANTS, std::move (l));
      }
#else
      static
      symbol_type
      make_CONSTANTS (const location_type& l)
      {
        return symbol_type (token::TOK_CONSTANTS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PREDICATES (location_type l)
      {
        return symbol_type (token::TOK_PREDICATES, std::move (l));
      }
#else
      static
      symbol_type
      make_PREDICATES (const location_type& l)
      {
        return symbol_type (token::TOK_PREDICATES, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ACTION (location_type l)
      {
        return symbol_type (token::TOK_ACTION, std::move (l));
      }
#else
      static
      symbol_type
      make_ACTION (const location_type& l)
      {
        return symbol_type (token::TOK_ACTION, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PARAMETERS (location_type l)
      {
        return symbol_type (token::TOK_PARAMETERS, std::move (l));
      }
#else
      static
      symbol_type
      make_PARAMETERS (const location_type& l)
      {
        return symbol_type (token::TOK_PARAMETERS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PRECONDITIONS (location_type l)
      {
        return symbol_type (token::TOK_PRECONDITIONS, std::move (l));
      }
#else
      static
      symbol_type
      make_PRECONDITIONS (const location_type& l)
      {
        return symbol_type (token::TOK_PRECONDITIONS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EFFECTS (location_type l)
      {
        return symbol_type (token::TOK_EFFECTS, std::move (l));
      }
#else
      static
      symbol_type
      make_EFFECTS (const location_type& l)
      {
        return symbol_type (token::TOK_EFFECTS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND (location_type l)
      {
        return symbol_type (token::TOK_AND, std::move (l));
      }
#else
      static
      symbol_type
      make_AND (const location_type& l)
      {
        return symbol_type (token::TOK_AND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOT (location_type l)
      {
        return symbol_type (token::TOK_NOT, std::move (l));
      }
#else
      static
      symbol_type
      make_NOT (const location_type& l)
      {
        return symbol_type (token::TOK_NOT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQUAL (location_type l)
      {
        return symbol_type (token::TOK_EQUAL, std::move (l));
      }
#else
      static
      symbol_type
      make_EQUAL (const location_type& l)
      {
        return symbol_type (token::TOK_EQUAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OBJECTS (location_type l)
      {
        return symbol_type (token::TOK_OBJECTS, std::move (l));
      }
#else
      static
      symbol_type
      make_OBJECTS (const location_type& l)
      {
        return symbol_type (token::TOK_OBJECTS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INIT (location_type l)
      {
        return symbol_type (token::TOK_INIT, std::move (l));
      }
#else
      static
      symbol_type
      make_INIT (const location_type& l)
      {
        return symbol_type (token::TOK_INIT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GOAL (location_type l)
      {
        return symbol_type (token::TOK_GOAL, std::move (l));
      }
#else
      static
      symbol_type
      make_GOAL (const location_type& l)
      {
        return symbol_type (token::TOK_GOAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LPAREN (location_type l)
      {
        return symbol_type (token::TOK_LPAREN, std::move (l));
      }
#else
      static
      symbol_type
      make_LPAREN (const location_type& l)
      {
        return symbol_type (token::TOK_LPAREN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RPAREN (location_type l)
      {
        return symbol_type (token::TOK_RPAREN, std::move (l));
      }
#else
      static
      symbol_type
      make_RPAREN (const location_type& l)
      {
        return symbol_type (token::TOK_RPAREN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_HYPHEN (location_type l)
      {
        return symbol_type (token::TOK_HYPHEN, std::move (l));
      }
#else
      static
      symbol_type
      make_HYPHEN (const location_type& l)
      {
        return symbol_type (token::TOK_HYPHEN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NAME (std::string v, location_type l)
      {
        return symbol_type (token::TOK_NAME, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NAME (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_NAME, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NUMBER (int v, location_type l)
      {
        return symbol_type (token::TOK_NUMBER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NUMBER (const int& v, const location_type& l)
      {
        return symbol_type (token::TOK_NUMBER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VARIABLE (std::string v, location_type l)
      {
        return symbol_type (token::TOK_VARIABLE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_VARIABLE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_VARIABLE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REQUIREKEY (std::string v, location_type l)
      {
        return symbol_type (token::TOK_REQUIREKEY, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_REQUIREKEY (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_REQUIREKEY, v, l);
      }
#endif


  private:
    /// This class is not copyable.
    PDDLParser (const PDDLParser&);
    PDDLParser& operator= (const PDDLParser&);

    /// State numbers.
    typedef int state_type;

    /// Generate an error message.
    /// \param yystate   the state where the error occurred.
    /// \param yyla      the lookahead token.
    virtual std::string yysyntax_error_ (state_type yystate,
                                         const symbol_type& yyla) const;

    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token number \a t to a symbol number.
    static token_number_type yytranslate_ (token_type t);

    // Tables.
  // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
  // STATE-NUM.
  static const short yypact_[];

  // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
  // Performed when YYTABLE does not specify something else to do.  Zero
  // means the default is an error.
  static const unsigned char yydefact_[];

  // YYPGOTO[NTERM-NUM].
  static const short yypgoto_[];

  // YYDEFGOTO[NTERM-NUM].
  static const short yydefgoto_[];

  // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
  // positive, shift that token.  If negative, reduce the rule whose
  // number is the opposite.  If YYTABLE_NINF, syntax error.
  static const unsigned char yytable_[];

  static const short yycheck_[];

  // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
  // symbol of state STATE-NUM.
  static const unsigned char yystos_[];

  // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
  static const unsigned char yyr1_[];

  // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
  static const unsigned char yyr2_[];


    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *n);


    /// For a symbol, its name in clear.
    static const char* const yytname_[];
#if YYDEBUG
  // YYRLINE[YYN] -- Source line where rule number YYN was defined.
  static const unsigned short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r);
    /// Print the state stack on the debug stream.
    virtual void yystack_print_ ();

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol type, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol type as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol type from \a that.
      void move (by_state& that);

      /// The (internal) type number (corresponding to \a state).
      /// \a empty_symbol when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      enum { empty_state = -1 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::reverse_iterator iterator;
      typedef typename S::const_reverse_iterator const_iterator;
      typedef typename S::size_type size_type;

      stack (size_type n = 200)
        : seq_ (n)
      {}

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (size_type i)
      {
        return seq_[size () - 1 - i];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (int i)
      {
        return operator[] (size_type (i));
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (size_type i) const
      {
        return seq_[size () - 1 - i];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (int i) const
      {
        return operator[] (size_type (i));
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (int n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      size_type
      size () const YY_NOEXCEPT
      {
        return seq_.size ();
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.rbegin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.rend ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, int range)
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (int i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        int range_;
      };

    private:
      stack (const stack&);
      stack& operator= (const stack&);
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Constants.
    enum
    {
      yyeof_ = 0,
      yylast_ = 154,     ///< Last index in yytable_.
      yynnts_ = 35,  ///< Number of nonterminal symbols.
      yyfinal_ = 6, ///< Termination state number.
      yyterror_ = 1,
      yyerrcode_ = 256,
      yyntokens_ = 58  ///< Number of tokens.
    };


    // User arguments.
    PDDLDriver& driver;
  };

  inline
  PDDLParser::token_number_type
  PDDLParser::yytranslate_ (token_type t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const token_number_type
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
    };
    const unsigned user_token_number_max_ = 312;
    const token_number_type undef_token_ = 2;

    if (static_cast<int> (t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  PDDLParser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value ()
    , location (std::move (that.location))
  {
    switch (this->type_get ())
    {
      case 34: // "action-def"
      case 68: // action-def
        value.move< Action* > (std::move (that.value));
        break;

      case 35: // "action-def-body"
      case 71: // action-def-body
        value.move< ActionDefBody* > (std::move (that.value));
        break;

      case 33: // "actions"
      case 67: // actions
        value.move< ActionList* > (std::move (that.value));
        break;

      case 27: // "domain-def"
      case 60: // domain-def
        value.move< Domain* > (std::move (that.value));
        break;

      case 29: // "domain-body"
      case 62: // domain-body
        value.move< DomainBody* > (std::move (that.value));
        break;

      case 41: // "literal"
      case 43: // "grounded-literal"
      case 91: // literal
      case 92: // grounded-literal
        value.move< Literal* > (std::move (that.value));
        break;

      case 36: // "preconditions-list"
      case 37: // "effects-list"
      case 38: // "atomic-formula"
      case 42: // "literal-list"
      case 44: // "grounded-literal-list"
      case 45: // "grounded-atomic-formula"
      case 56: // "init-def"
      case 57: // "goal-def"
      case 72: // preconditions-list
      case 73: // effects-list
      case 78: // init-def
      case 79: // goal-def
      case 85: // literal-list
      case 86: // grounded-literal-list
      case 87: // atomic-formula
      case 88: // grounded-atomic-formula
        value.move< LiteralList* > (std::move (that.value));
        break;

      case 50: // "parameters-list"
      case 70: // parameters-list
        value.move< ParameterList* > (std::move (that.value));
        break;

      case 39: // "predicate"
      case 40: // "grounded-predicate"
      case 89: // predicate
      case 90: // grounded-predicate
        value.move< Predicate* > (std::move (that.value));
        break;

      case 48: // "predicates-def"
      case 49: // "predicates-list"
      case 66: // predicates-def
      case 69: // predicates-list
        value.move< PredicateList* > (std::move (that.value));
        break;

      case 30: // "problem-def"
      case 74: // problem-def
        value.move< Problem* > (std::move (that.value));
        break;

      case 46: // "requirements-def"
      case 47: // "requirekeys-list"
      case 52: // "variables-list"
      case 53: // "names-list"
      case 55: // "objects-def"
      case 63: // requirements-def
      case 77: // objects-def
      case 80: // requirekeys-list
      case 81: // names-list
      case 83: // variables-list
        value.move< StringList* > (std::move (that.value));
        break;

      case 51: // "typed-variables-list"
      case 54: // "typed-names-list"
      case 82: // typed-names-list
      case 84: // typed-variables-list
        value.move< TypeDict* > (std::move (that.value));
        break;

      case 24: // "number"
        value.move< int > (std::move (that.value));
        break;

      case 23: // "name"
      case 25: // "variable"
      case 26: // "requirekey"
      case 28: // "domain-name"
      case 31: // "problem-name"
      case 32: // "domain-reference"
      case 61: // domain-name
      case 75: // problem-name
      case 76: // domain-reference
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

  }
#endif

  template <typename Base>
  PDDLParser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->type_get ())
    {
      case 34: // "action-def"
      case 68: // action-def
        value.copy< Action* > (YY_MOVE (that.value));
        break;

      case 35: // "action-def-body"
      case 71: // action-def-body
        value.copy< ActionDefBody* > (YY_MOVE (that.value));
        break;

      case 33: // "actions"
      case 67: // actions
        value.copy< ActionList* > (YY_MOVE (that.value));
        break;

      case 27: // "domain-def"
      case 60: // domain-def
        value.copy< Domain* > (YY_MOVE (that.value));
        break;

      case 29: // "domain-body"
      case 62: // domain-body
        value.copy< DomainBody* > (YY_MOVE (that.value));
        break;

      case 41: // "literal"
      case 43: // "grounded-literal"
      case 91: // literal
      case 92: // grounded-literal
        value.copy< Literal* > (YY_MOVE (that.value));
        break;

      case 36: // "preconditions-list"
      case 37: // "effects-list"
      case 38: // "atomic-formula"
      case 42: // "literal-list"
      case 44: // "grounded-literal-list"
      case 45: // "grounded-atomic-formula"
      case 56: // "init-def"
      case 57: // "goal-def"
      case 72: // preconditions-list
      case 73: // effects-list
      case 78: // init-def
      case 79: // goal-def
      case 85: // literal-list
      case 86: // grounded-literal-list
      case 87: // atomic-formula
      case 88: // grounded-atomic-formula
        value.copy< LiteralList* > (YY_MOVE (that.value));
        break;

      case 50: // "parameters-list"
      case 70: // parameters-list
        value.copy< ParameterList* > (YY_MOVE (that.value));
        break;

      case 39: // "predicate"
      case 40: // "grounded-predicate"
      case 89: // predicate
      case 90: // grounded-predicate
        value.copy< Predicate* > (YY_MOVE (that.value));
        break;

      case 48: // "predicates-def"
      case 49: // "predicates-list"
      case 66: // predicates-def
      case 69: // predicates-list
        value.copy< PredicateList* > (YY_MOVE (that.value));
        break;

      case 30: // "problem-def"
      case 74: // problem-def
        value.copy< Problem* > (YY_MOVE (that.value));
        break;

      case 46: // "requirements-def"
      case 47: // "requirekeys-list"
      case 52: // "variables-list"
      case 53: // "names-list"
      case 55: // "objects-def"
      case 63: // requirements-def
      case 77: // objects-def
      case 80: // requirekeys-list
      case 81: // names-list
      case 83: // variables-list
        value.copy< StringList* > (YY_MOVE (that.value));
        break;

      case 51: // "typed-variables-list"
      case 54: // "typed-names-list"
      case 82: // typed-names-list
      case 84: // typed-variables-list
        value.copy< TypeDict* > (YY_MOVE (that.value));
        break;

      case 24: // "number"
        value.copy< int > (YY_MOVE (that.value));
        break;

      case 23: // "name"
      case 25: // "variable"
      case 26: // "requirekey"
      case 28: // "domain-name"
      case 31: // "problem-name"
      case 32: // "domain-reference"
      case 61: // domain-name
      case 75: // problem-name
      case 76: // domain-reference
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }



  template <typename Base>
  bool
  PDDLParser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  PDDLParser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->type_get ())
    {
      case 34: // "action-def"
      case 68: // action-def
        value.move< Action* > (YY_MOVE (s.value));
        break;

      case 35: // "action-def-body"
      case 71: // action-def-body
        value.move< ActionDefBody* > (YY_MOVE (s.value));
        break;

      case 33: // "actions"
      case 67: // actions
        value.move< ActionList* > (YY_MOVE (s.value));
        break;

      case 27: // "domain-def"
      case 60: // domain-def
        value.move< Domain* > (YY_MOVE (s.value));
        break;

      case 29: // "domain-body"
      case 62: // domain-body
        value.move< DomainBody* > (YY_MOVE (s.value));
        break;

      case 41: // "literal"
      case 43: // "grounded-literal"
      case 91: // literal
      case 92: // grounded-literal
        value.move< Literal* > (YY_MOVE (s.value));
        break;

      case 36: // "preconditions-list"
      case 37: // "effects-list"
      case 38: // "atomic-formula"
      case 42: // "literal-list"
      case 44: // "grounded-literal-list"
      case 45: // "grounded-atomic-formula"
      case 56: // "init-def"
      case 57: // "goal-def"
      case 72: // preconditions-list
      case 73: // effects-list
      case 78: // init-def
      case 79: // goal-def
      case 85: // literal-list
      case 86: // grounded-literal-list
      case 87: // atomic-formula
      case 88: // grounded-atomic-formula
        value.move< LiteralList* > (YY_MOVE (s.value));
        break;

      case 50: // "parameters-list"
      case 70: // parameters-list
        value.move< ParameterList* > (YY_MOVE (s.value));
        break;

      case 39: // "predicate"
      case 40: // "grounded-predicate"
      case 89: // predicate
      case 90: // grounded-predicate
        value.move< Predicate* > (YY_MOVE (s.value));
        break;

      case 48: // "predicates-def"
      case 49: // "predicates-list"
      case 66: // predicates-def
      case 69: // predicates-list
        value.move< PredicateList* > (YY_MOVE (s.value));
        break;

      case 30: // "problem-def"
      case 74: // problem-def
        value.move< Problem* > (YY_MOVE (s.value));
        break;

      case 46: // "requirements-def"
      case 47: // "requirekeys-list"
      case 52: // "variables-list"
      case 53: // "names-list"
      case 55: // "objects-def"
      case 63: // requirements-def
      case 77: // objects-def
      case 80: // requirekeys-list
      case 81: // names-list
      case 83: // variables-list
        value.move< StringList* > (YY_MOVE (s.value));
        break;

      case 51: // "typed-variables-list"
      case 54: // "typed-names-list"
      case 82: // typed-names-list
      case 84: // typed-variables-list
        value.move< TypeDict* > (YY_MOVE (s.value));
        break;

      case 24: // "number"
        value.move< int > (YY_MOVE (s.value));
        break;

      case 23: // "name"
      case 25: // "variable"
      case 26: // "requirekey"
      case 28: // "domain-name"
      case 31: // "problem-name"
      case 32: // "domain-reference"
      case 61: // domain-name
      case 75: // problem-name
      case 76: // domain-reference
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_type.
  inline
  PDDLParser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  PDDLParser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  inline
  PDDLParser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  inline
  PDDLParser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  PDDLParser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  PDDLParser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  PDDLParser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }

  inline
  PDDLParser::token_type
  PDDLParser::by_type::token () const YY_NOEXCEPT
  {
    // YYTOKNUM[NUM] -- (External) token number corresponding to the
    // (internal) symbol number NUM (which must be that of a token).  */
    static
    const unsigned short
    yytoken_number_[] =
    {
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
    };
    return token_type (yytoken_number_[type]);
  }


} // yy
#line 2472 "src/pddlparser.tab.hh" // lalr1.cc:417




#endif // !YY_YY_SRC_PDDLPARSER_TAB_HH_INCLUDED
