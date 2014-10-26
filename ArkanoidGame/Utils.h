#ifndef UTILS_H
#define UTILS_H

#include <sstream>

using namespace std;

/** @file
 * @author  Jean Silva <jeangleison2@gmail.com>, Caio Santos <caio-cesar-ms@hotmail.com>
 *
 * @section DESCRIPTION
 *
 * A classe Utils contem algumas funções de uso comum, como conversão de inteiro para string e etc...
 *
 *
 */

class Utils
{
public:
    Utils();

    /**
     * Converte de string para inteiro
     * @param string s
     * @return int
     */

    static int stringToInt(string s);

    /**
     * Converte de inteiro para string
     * @param int i
     * @return string
     */

    static string intToString(int i);
};

#endif // UTILS_H
