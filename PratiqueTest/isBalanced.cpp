/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isBalanced.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:33:07 by mal               #+#    #+#             */
/*   Updated: 2023/02/02 10:19:18 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stack>

using namespace std;

//string isBalanced(string s)
//{
//    stack<char>brackets;
//    for (int i = 0; i < s.length(); i++)
//    {
//        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
//            brackets.push(s[i]);
//        if (s.empty())
//            return ("NO");
//        switch (s[i])
//        {
//            
//        }
//    }
//    
//}

string isBalanced(string expr) {
	stack<char> s;
	char ch;
	for (int i=0; i<expr.length(); i++) 
	{    //for each character in the expression, check conditions
		if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
		{    //when it is opening bracket, push into     stack
			s.push(expr[i]);
			continue;
		}
		if (s.empty())    //stack cannot be empty as it is not opening bracket, there must be closing     bracket
			return ("NO");
		switch (expr[i])
		{
			case ')':    //for closing parenthesis, pop it and check for braces and square brackets
				ch = s.top();
				s.pop();
				if (ch=='{' || ch=='[')
					return ("NO");
				break;
			case '}': //for closing braces, pop it and check for parenthesis and square brackets
				ch = s.top();
				s.pop();
				if (ch=='(' || ch=='[')
					return ("NO");
				break;
			case ']': //for closing square bracket, pop it and check for braces and parenthesis
				ch = s.top();
				s.pop();
				if (ch =='(' || ch == '{')
					return ("NO");
				break;
		 }
	}
	if (!(s.empty()))
		return ("NO");
	return ("YES");
}

int main()
{
	string test1 = "[()][{}()][](){}([{}(())([[{}]])][])[]([][])(){}{{}{[](){}}}()[]({})[{}{{}([{}][])}]";
	string test2 = "[()][{}[{}[{}]]][]{}[]{}[]{{}({}(){({{}{}[([[]][[]])()]})({}{{}})})}";
	string test3 = "(])[{{{][)[)])(]){(}))[{(})][[{)(}){[(]})[[{}(])}({)(}[[()}{}}]{}{}}()}{({}](]{{[}}(([{]";
	string test4 = "){[]()})}}]{}[}}})}{]{](]](()][{))])(}]}))(}[}{{)}{[[}[]";
	string test5 = "}(]}){";
	string test6 = "((]()(]([({]}({[)){}}[}({[{])(]{()[]}}{)}}]]{({)[}{(";
	string test7 = "{}{({{}})}[][{{}}]{}{}(){{}[]}{}([[][{}]]())";
	string test8 = "(){}[()[][]]{}(())()[[([])][()]{}{}(({}[]()))()[()[{()}]][]]";
	string test9 = "()([]({}[]){}){}{()}[]{}[]()(()([[]]()))()()()[]()(){{}}()({[{}][]}[[{{}({({({})})})}]])";
	string test10 = "[]([{][][)(])}()([}[}(})}])}))]](}{}})[]({{}}))[])(}}[[{]{}]()[(][])}({]{}[[))[[}[}{(]})()){{(]]){][";
	string test11 = "{()({}[[{}]]()(){[{{}{[[{}]{}((({[]}{}()[])))]((()()))}(()[[[]]])((()[[](({([])()}))[]]))}]})}";
	string test12 = "()(){{}}[()()]{}{}";
	string test13 = "{}()([[]])({}){({[][[][[()]]{{}[[]()]}]})}[](())((())[{{}}])";
	string test14 = "{}(((){}){[]{{()()}}()})[]{{()}{(){()(){}}}}{()}({()(()({}{}()((()((([])){[][{()}{}]})))))})";
	string test15 = "][[{)())))}[)}}}}[{){}()]([][]){{{{{[)}]]{([{)()][({}[){]({{";
	string test16 = "{{}(";
	string test17 = "{[{((({}{({({()})()})[]({()[[][][]]}){}}))){}}]}{}{({((){{}[][]{}[][]{}}[{}])(())}[][])}";
	string test18 = "()[[][()[]][]()](([[[(){()[[]](([]))}]]]))";
	string test19 = "()[]({}{})(()){{{}}()()}({[]()}())[](){}(({()}[{}[{({{}}){({}){({})((({()})))}}}]]))";
	string test20 = "}[{){({}({)})]([}{[}}{[(([])[(}){[]])([]]}(]]]]{][";
	string test21 = "[{]{[{(){[}{}(([(]}])(){[[}(]){(})))}}{{)}}{}][({(}))]}({)";
	string test22 = ")})[(]{][[())]{[]{{}}[)[)}[]){}](}({](}}}[}{({()]]";
	string test23 = "[[[({[]}({[][[[[][[{(()[][])}()[][]][]{}]]]]}))][(()){}]]]()[{}([]{}){}{{}}]";
	string test24 = "({[]({[]})}())[][{}[{{(({{{([{}])}}}))}}]]";
	string test25 = "([((()))()])[][][]{}()(([]))[]()[]((){}[]){}(){{}[]}[[{[]}]]";
	string test26 = "[[(((({}{[]{}()}){}{{}}){({[]{[{}]{(){}(((){()}))}()}}[[]]()()[()])[[{}{}]()]}))]]{}[]{}({({{}})})";
	string test27 = "(]{()}((";
	string test28 = "[][(())[({{{()[]}}{[[][[][[[]{{{[()]{{{{}{[]}[][]}}}}}}]]]]}})]]";
	string test29 = "}[})})}[)]{}{)";
	string test30 = "({(}{})))}(}[)[}{)}}[)[{][{(}{{}]({}{[(})[{[({{[}{(]]})}";
	string test31 = "]}})[]))]{][])[}(])]({[]}[]([)";
	string test32 = "[{{}{[{{[}[[}([]";
	string test33 = "[([]){}][({})({[(([])[][])][[{}{([{{}{(()){{{({}{{}}())}}[]}}()[()[{{{([](()){[[[]]]})}}}]]}])}]]})]";
	string test34 = "]{}{(}))}](})[{]]()(]([}]([}][}{]{[])}{{{]([][()){{})[{({{{[}{}](]}}";
	string test35 = "{[{}}){(}[][)(}[}][)({[[{]}[(()[}}){}{)([)]}(()))]{)(}}}][";
	string test36 = "(]{}{(}}}[)[";
	string test37 = "[]{}{[[]]}([{}]{}[]){{(())}}";
	string test38 = "[)([{(][(){)[)}{)]]}}([((][[}}(]{}]]}]][(({{{))[[){}{]][))[]{]][)[{{}{()]){)])))){{{[(]}[}}{}]";
	string test39 = "{({(){[[[][]{}[[([]{})]{}]][[]()()]]}})}[{}{{}}]";
	string test40 = ")}][(})){))[{}[}";
	string test41 = "{[]{({]}[}}[{([([)([){{}{(}}[]}}[[{[}[[()(])[}[]";
	string test42 = "()()()[]";
	string test43 = "((){}])][]][}{]{)]]}][{]}[)(])[}[({(";
	string test44 = ")[((])(]]]]((]){{{{())]}]}(}{([}(({}]])[[{){[}]{{}})[){(";
	string test45 = "}][[{[((}{[]){}}[[[)({[)}]]}(]]{[)[]}{}(){}}][{()]))})]][(((}}";
	string test46 = "([]){}{{}{}}()([([{}{[[]()([(([]()))()[[]]])]}])])";
	string test47 = "[()[[]{{[]}()([])}[]][][]][]()[]{}{}[][]{}{}[()(){}]";
	string test48 = "{[{){]({(((({](]{([])([{{([])[}(){(]](]{[{[]}}())[){})}))[{})))[";
	string test49 = "{}[()[]][]{}{}[[{{[[({})]()[[()]]]}}]]";
	string test50 = "{[{}[][]]}[((()))][]({})[]{}{()}";
	string test51 = "(){[{({})}]}";
	string test52 = "([]])][{)]({)[]))}]())[}]))][}{(}}})){]}]{[)}(][})[[";
	string test53 = "((({{}(([{}(())]))[()]{[[[]()]]}})))";
	string test54 = "}()))}(}]]{{})}][{](]][{]{[[]]]}]]}([)({([))[[(]}])}[}(([{)[)]]([[](]}]}{]{{})[]){]}{])(";
	string test55 = "{}{}{}{[[()]][]}";
	string test56 = ")]}]({{})[[[{]{{{}}][))]{{";
	string test57 = "))){({}])}])}}]{)()(}(]}([";
	string test58 = "([[]][])[[]()][]()(([[]]{[()[]{[][{}]}[()]]{}{[]}}{{}()}(()[([][]{})[[{}][]]{}[]])))";
	string test59 = "(]{[({}[){)))}]{[{}][({[({[]))}[}]}{()(([]{]()}})}[]{[)](((]]])([]}}]){)(([]]}[[}[";
	string test60 = "([[]])({}(([(){{}[{}]}]){[{}]}))[][{}{}](){}";
	string test61 = "[][][][][][([])][]{({()}[[()()]{([(){[]{}}{(())}{[](){}()({}())}[({}[[]()])][]])}])}";
	string test62 = "}[{{(}})}}(((())()({]{([]((][(({)[({[]]}[])}]{][{{}]{)][}(])}}}))}}}";
	string test63 = "[]({})()[]{}{}[]({}{})[]{([])()[()][{()({})[{}{[[()]{}[]][]}(({{[]{()()()}{}[]()}[]}){{}{}})]}]}";
	string test64 = "{{(([{)]{}({][{](){({([[[][)}[)})(";
	string test65 = "[{}]{[()({[{}]})]}";
	string test66 = "[[{}]]";
	string test67 = "]{{({[{]}[[)]]}{}))}{){({]]}{]([)({{[]){)]{}){){}()})(]]{{])(])[]}][[()()}";
	string test68 = "{[([}[[{{(]]][}()())]{){(){)]]){})}]{][][(}[]())[}[)})})[][{[)[})()][]))}[[}";
	string test69 = "]()])}[}}}{]]{)[}(}]]])])}{(}{([{]({)]}])(})[{}[)]])]}[]{{)){}{()}]}((}}{({])[}])[]}";
	string test70 = "(]}[{}{{][}))){{{([)([[])([]{[";
	string test71 = "{(()[]){}}(){[]}({{}(()())})([]){}{}(())()[()]{}()";
	string test72 = "{{}[{}[{}[]]]}{}({{[]}})[[(){}][]]{}(([]{[][]()()}{{{()()}{[]}({}[]{()})}{()}[[]][()]}))";
	string test73 = "{[][]}[{}[](){}]{{}{[][{}]}}";
	string test74 = "()(){}(){((){}[])([[]]())}";
	string test75 = "{}[[{[((}[(}[[]{{]([(}]][[";
	string test76 = "{}[([{[{{}()}]{}}([[{}[]]({}{{()}[][][]})])])]";
	string test77 = "{[](}([)(])[]]})()]){[({]}{{{)({}(][{{[}}(]{";
	string test78 = "[][]{{}[](())}{}({[()]}())[][[][({}([{}]))]]";
	string test79 = "((()))[]{[(()({[()({[]}{})]}))]}{[]}{{({}{})[{}{}]{()([()])[{()}()[[]{}()]{}{}[]()]}[[]{[]}([])]}}";
	//cout << isBalanced(test1) << endl;
	//cout << isBalanced(test2) << endl;
	//cout << isBalanced(test3) << endl;
	//cout << isBalanced(test4) << endl;
	//cout << isBalanced(test5) << endl;
	//cout << isBalanced(test6) << endl;
	//cout << isBalanced(test7) << endl;
	//cout << isBalanced(test8) << endl;
	//cout << isBalanced(test9) << endl;
	//cout << isBalanced(test10) << endl;
	//cout << isBalanced(test11) << endl;
	//cout << isBalanced(test12) << endl;
	//cout << isBalanced(test13) << endl;
	//cout << isBalanced(test14) << endl;
	//cout << isBalanced(test15) << endl;
	cout << isBalanced(test16) << endl;
	//cout << isBalanced(test17) << endl;
	//cout << isBalanced(test18) << endl;
	//cout << isBalanced(test19) << endl;
	//cout << isBalanced(test20) << endl;
	//cout << isBalanced(test21) << endl;
	//cout << isBalanced(test22) << endl;
	//cout << isBalanced(test23) << endl;
	//cout << isBalanced(test24) << endl;
	//cout << isBalanced(test25) << endl;
	//cout << isBalanced(test26) << endl;
	//cout << isBalanced(test27) << endl;
	//cout << isBalanced(test28) << endl;
	//cout << isBalanced(test29) << endl;
	//cout << isBalanced(test30) << endl;
	//cout << isBalanced(test31) << endl;
	//cout << isBalanced(test32) << endl;
	//cout << isBalanced(test33) << endl;
	//cout << isBalanced(test34) << endl;
	//cout << isBalanced(test35) << endl;
	//cout << isBalanced(test36) << endl;
	//cout << isBalanced(test37) << endl;
	//cout << isBalanced(test38) << endl;
	//cout << isBalanced(test39) << endl;
	//cout << isBalanced(test40) << endl;
	//cout << isBalanced(test41) << endl;
	//cout << isBalanced(test42) << endl;
	//cout << isBalanced(test43) << endl;
	//cout << isBalanced(test44) << endl;
	//cout << isBalanced(test45) << endl;
	//cout << isBalanced(test46) << endl;
	//cout << isBalanced(test47) << endl;
	//cout << isBalanced(test48) << endl;
	//cout << isBalanced(test49) << endl;
	//cout << isBalanced(test50) << endl;
	//cout << isBalanced(test51) << endl;
	//cout << isBalanced(test52) << endl;
	//cout << isBalanced(test53) << endl;
	//cout << isBalanced(test54) << endl;
	//cout << isBalanced(test55) << endl;
	//cout << isBalanced(test56) << endl;
	//cout << isBalanced(test57) << endl;
	//cout << isBalanced(test58) << endl;
	//cout << isBalanced(test59) << endl;
	//cout << isBalanced(test60) << endl;
	//cout << isBalanced(test61) << endl;
	//cout << isBalanced(test62) << endl;
	//cout << isBalanced(test63) << endl;
	//cout << isBalanced(test64) << endl;
	//cout << isBalanced(test65) << endl;
	//cout << isBalanced(test66) << endl;
	//cout << isBalanced(test67) << endl;
	//cout << isBalanced(test68) << endl;
	//cout << isBalanced(test69) << endl;
	//cout << isBalanced(test70) << endl;
	//cout << isBalanced(test71) << endl;
	//cout << isBalanced(test72) << endl;
	//cout << isBalanced(test73) << endl;
	//cout << isBalanced(test74) << endl;
	//cout << isBalanced(test75) << endl;
	//cout << isBalanced(test76) << endl;
	//cout << isBalanced(test77) << endl;
	//cout << isBalanced(test78) << endl;
	//cout << isBalanced(test79) << endl;
}