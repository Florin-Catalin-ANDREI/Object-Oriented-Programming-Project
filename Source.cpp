/*
		    P R O J E C T   -   O B J E C T   O R I E N T E D   P R O G R A M M I N G
			  ------------------------------------------------------------------

Author:  ANDREI FLORIN-CATALIN
		 First Year Student
				

*/

/*
						             PROJECT REQUIREMENTS:
						            -----------------------

     Define a generic class for rectangular matrices with elements of unspecified type, with operator overloading 
for =, ==, +, - (unary and binary), *, [] (indexing). 
A matrix with m rows and n columns will be represented as a vector (i.e. pointer to the type of elements)  in which
the lines of the matrix will be placed successively, i.e. a11, a12, ... a1n, a21, a22, ... a2n, ... ... am1, am2, 
..., amn. 
The [] operator will return a pointer to the beginning of the line whose number is the parameter, starting with 0. 
In this representation, if "a" is an object of the class, a[i] will be a pointer to the type of elements having as 
value the address of the element a(i+1)1 in the above notation, and a[i][ j] will be the element a(i+1)(j+1) from 
the same notation, the second use of the operator [] being the predefined one for pointers to the type of matrix
elements.


*/

/*
							                MENTION:
							         ---------------------

    This version of the project uses a vector from the "vector" library declared by
						" vector<data_type> variable_name "











	Project structure:


			---------------------------------------------
			|                                           |
			|            CLASS DEFINITION               |
			|    - methods                              |
			|          - constructors                   |
			|          - operators overloading          |
			|          - other methods                  |
			|    - members                              |
			|                                           |
			|                                           |
			|            main() FUNCTION                |
			|                                           |
			|                                           |
			|          CLASS IMPLEMENTATION             |
			|          - constructors                   |
			|          - operators overloading          |
			|          - other methods                  |
			|                                           |
			---------------------------------------------
*/

/*
		           P R O J E C T   I M P L E M E N T A T I O N
		        -------------------------------------------------
*/


#include <iostream>
#include <vector>
using namespace std;

/*
	***********************************************************************
	*                                                                     *
	*                 C L A S S   D E F I N I T I O N                     *
	*                        "   Matrix   "                               *
	*       ------------------------------------------------------        *
	*                                                                     *
	***********************************************************************
*/


template<class T_MATRIX_ELEMENT>
class Matrix
{
public:



/*
	***********************************************************************
	*                                                                     *
	*                    C L A S S   M E T H O D S                        *
	*                 -------------------------------                     *
	*                                                                     *
	***********************************************************************
*/



/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   C O N S T R U C T O R S                          |
	|                 ----------------------------                       |
	|                                                                    |
	----------------------------------------------------------------------
*/
/*
	----------------------------------------------------------------------
	|                                                                    |
    |                CONSTRUCTOR with parameters                         |
    |     the input parameters will be the number of lines and           |
	|                 the number of columns                              |
	|   the matrix elements will be initialized with the value "0"       |
	|                                                                    |
	----------------------------------------------------------------------
*/
	Matrix(int, int);

	/*
	----------------------------------------------------------------------
	|                                                                    |
	|                         copy CONSTRUCTOR                           |
	|                                                                    |
	----------------------------------------------------------------------
*/
	Matrix(const Matrix& );

/*
	----------------------------------------------------------------------
	|                      assignment CONSTRUCTOR                        |
	|                   OVERLOADING of the operator                      |
	|                            "  =  "                                 |
	----------------------------------------------------------------------
*/
	Matrix& operator=(const Matrix&);

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                    D E S T R U C T O R                             |
	|                     ---------------                                |
	|                                                                    |
	----------------------------------------------------------------------
*/
	//~Matrix();






/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   OPERATORS OVERLOADING                            |
	|               -------------------------------                      |
	|                                                                    |
	----------------------------------------------------------------------
*/
/*
	----------------------------------------------------------------------
	|                                                                    |
	|                    OVERLOADING of the operator                     |
	|                           "  +  "                                  |
	|                    the addition of two matrices                    |
	|                                                                    |
	----------------------------------------------------------------------
*/
	Matrix operator+(Matrix);

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   OVERLOADING of the operator                      |
	|                           "  -  "                                  |
	|                  the subtraction of two matrices                   |
	|                                                                    |
	----------------------------------------------------------------------
*/
	Matrix operator-(Matrix);

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   OVERLOADING of the operator                      |
	|                           "  -  "                                  |
	|                     the unary operation                            |
	|                                                                    |
	----------------------------------------------------------------------
*/
	Matrix operator-();

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                  OVERLOADING of the operator                       |
	|                           "  *  "                                  |
	|                 multiplication of two matrices                     |
	|                                                                    |
	----------------------------------------------------------------------
*/
	Matrix operator*(Matrix);

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                  OVERLOADING of the operator                       |
	|                           "  ==  "                                 |
	|                 the comparison of two matrices                     |
	|                                                                    |
	----------------------------------------------------------------------
*/
	bool operator==(Matrix);

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   OVERLOADING of the operator                      |
	|                           "  !=  "                                 |
	|                  the comparison of two matrices                    |
	|                          inequality                                |
	|                                                                    |
	----------------------------------------------------------------------
*/
	bool operator!=(Matrix);

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   OVERLOADING of the operator                      |
	|                           "  []  "                                 |
	|                             index                                  |
	|                        "  matrix[x]  "                             |
	|         returns the address of the first element on line x         |
	|     matrix[0] -> the first element on the first line of the matrix |
	|                                                                    |
	----------------------------------------------------------------------
*/
	T_MATRIX_ELEMENT* operator[](int);





/*
	----------------------------------------------------------------------
	|                                                                    |
	|                     O T H E R   M E T H O D S                      |
	|                 ----------------------------------                 |
	|                                                                    |
	----------------------------------------------------------------------
*/
/*
	----------------------------------------------------------------------
	|                                                                    |
	|                RESETTING the matrix from thekeyboard               |
	|             The new dimensions of the matrix will be set           |
	|                        and the new values                          |
	|                                                                    |
	----------------------------------------------------------------------
*/
	void resetFromKeyboard();

/*
	----------------------------------------------------------------------
	|                                                                    |
	|          INITIALIZING the matrix with ascending numbers            |
	|                     in ordine crescatoare                          |
	|                                                                    |
	----------------------------------------------------------------------
*/
	void reinitializationWithAscendingNumbers();

/*
	----------------------------------------------------------------------
	|                                                                    |
	|           INITIALIZING the matrix with descending numbers          |
	|                                                                    |
	----------------------------------------------------------------------
*/
	void reinitializationWithDescendingNumbers();

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                  DISPLAY the matrix on the screen                  |
	|                                                                    |
	----------------------------------------------------------------------
*/
	void printOnScreen();






private:
	/*
		***********************************************************************
		*                                                                     *
		*                    C L A S S   M E M B E R S                        *
		*                 -------------------------------                     *
		*                                                                     *
		***********************************************************************
	*/
	/*
		 ----------------------------------------------------------------------
		 |                                                                    |
		 |                    " m_numberOfLines   "                           |
		 |                    " m_numberOfColumns "                           |
		 |    the number of lines and the number of columns of the matrix     |
		 |                                                                    |
		 ----------------------------------------------------------------------
	*/
	int m_numberOfLines;
	int m_numberOfColumns;
/*
	----------------------------------------------------------------------
	|                                                                    |
	|                    " m_theMatrix   "                               |
	|                the content of the matrix                           |
	|       the number of elements of the vector will be                 |
    |  the number of lines multiplied by the number of columns           |
	|                                                                    |
	----------------------------------------------------------------------
*/
	vector<T_MATRIX_ELEMENT>* m_theMatrix;

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                      " m_index  "                                  |
	|         the address of the first element of the vector             |
	|                                                                    |
	----------------------------------------------------------------------
*/
	T_MATRIX_ELEMENT* m_index;

};






























/*
	***********************************************************************
	*                                                                     *
	*                   T H E    F U N C T I O N                          *
	*                                                                     *
	*                        "   main()   "                               *
	*       ------------------------------------------------------        *
	*                                                                     *
	*         ( it is an example of using the "Matrix" class )            *
	*                                                                     *
	***********************************************************************
*/


int main()
{
	cout << "Matrix A:  " << endl;
	Matrix<int> matriceaA(5, 5);
	matriceaA.reinitializationWithAscendingNumbers();
	matriceaA.printOnScreen();

	cout << "Matrix B:  " << endl;
	Matrix<int> matriceaB(5, 5);
	matriceaB.reinitializationWithDescendingNumbers();
	matriceaB.printOnScreen();

	cout << "Matrix C:  " << endl;
	Matrix<int> matriceaC(2, 5);
	matriceaC.printOnScreen();

	matriceaC.resetFromKeyboard();
	cout << "Matrix C:  " << endl;
	matriceaC.printOnScreen();

	cout << "Matrix C  =  Matrix A  +  Matrix B:  " << endl;
	matriceaC = matriceaA + matriceaB;
	cout << "Now the Matrix C is: " << endl;
	matriceaC.printOnScreen();

	cout << "Matrix C  =  Matrix A  -  Matrix B:  " << endl;
	matriceaC = matriceaA - matriceaB;
	cout << "Now the Matrix C is:  " << endl;
	matriceaC.printOnScreen();

	cout << "Matrix C  =  Matrix A  *  Matrix B:  " << endl;
	matriceaC = matriceaA * matriceaB;
	cout << "Now the Matrix C is: " << endl;
	matriceaC.printOnScreen();

	cout << "Matrix C  =  - Matrix A:  " << endl;
	matriceaC = -matriceaA;
	cout << "Now the Matrix C is: " << endl;
	matriceaC.printOnScreen();

	if (matriceaA == matriceaB)
	{
		cout << "  The Matrix A is equal with the Matrix B" << endl << endl;
	}
	if (matriceaA != matriceaB)
	{
		cout << "  The Matrix A is NOT equal with the Matrix B" << endl << endl;
	}

	int indexI = 2;
	int indexJ = 1;
	cout << "The first element on the line with the index" << indexI << " of the Matrix A is:  " << *matriceaA[indexI] << endl << endl;


	cout << "The element on the line with the index  " << indexI << " and the column with the index " << indexJ << " of the Matrix A is: " << matriceaA[indexI][indexJ] << endl << endl;


	return 0;
};































/*
	***********************************************************************
	*                                                                     *
	*           C L A S S   I M P L E M E N T  A T I O N                  *
	*                                                                     *
	*                       "   Matrix   "                                *
	*       ------------------------------------------------------        *
	*                                                                     *
	***********************************************************************
*/

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   C O N S T R U C T O R S                          |
	|                 ----------------------------                       |
	|                                                                    |
	----------------------------------------------------------------------
*/
/*
	----------------------------------------------------------------------
	|                                                                    |
	|                CONSTRUCTOR with parameters                         |
	|     the input parameters will be the number of lines and           |
	|                 the number of columns                              |
	|   the matrix elements will be initialized with the value "0"       |
	|                                                                    |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENT>
Matrix<T_MATRIX_ELEMENT>::Matrix(int numberOfLinesInput, int numberOfColumnsInput)
{
	if (numberOfLinesInput <= 0 || numberOfColumnsInput <= 0)
	{
		cout << "Valorile nepermise pentru dimensiunile matricii!" << endl;
		cout << "Valorile pentru dimensiunile matricii trebuie sa fie pozitive!" << endl;
		exit(0);
	};
	m_numberOfLines = numberOfLinesInput;
	m_numberOfColumns = numberOfColumnsInput;
	m_theMatrix = new vector<T_MATRIX_ELEMENT>(numberOfLinesInput * numberOfColumnsInput);
	m_index = &((*m_theMatrix)[0]);
};

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                         copy CONSTRUCTOR                           |
	|                                                                    |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENT>
Matrix<T_MATRIX_ELEMENT>::Matrix(const Matrix& inputMatrix)
{
	if (inputMatrix.m_numberOfLines <= 0 || inputMatrix.m_numberOfColumns <= 0)
	{
		cout << "Valorile nepermise pentru dimensiunile matricii!" << endl;
		cout << "Valorile pentru dimensiunile matricii trebuie sa fie pozitive!" << endl;
		exit(0);
	};
	m_numberOfLines = inputMatrix.m_numberOfLines;
	m_numberOfColumns = inputMatrix.m_numberOfColumns;
	m_theMatrix = new vector<T_MATRIX_ELEMENT>(m_numberOfLines * m_numberOfColumns);
	m_index = &((*m_theMatrix)[0]);
	for (int index = 0; index < m_numberOfLines * m_numberOfColumns;index++)
	{
		*(m_index + index) = *(inputMatrix.m_index + index);
	};
};

/*
	----------------------------------------------------------------------
	|                      assignment CONSTRUCTOR                        |
	|                   OVERLOADING of the operator                      |
	|                            "  =  "                                 |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENT>
Matrix<T_MATRIX_ELEMENT>& Matrix<T_MATRIX_ELEMENT>::operator=(const Matrix& inputMatrix)
{
	if (inputMatrix.m_numberOfLines <= 0 || inputMatrix.m_numberOfColumns <= 0)
	{
		cout << "Valorile nepermise pentru dimensiunile matricii!" << endl;
		cout << "Valorile pentru dimensiunile matricii trebuie sa fie pozitive!" << endl;
		exit(0);
	};
	m_numberOfLines = inputMatrix.m_numberOfLines;
	m_numberOfColumns = inputMatrix.m_numberOfColumns;
	m_theMatrix->clear();
	m_theMatrix->resize(m_numberOfLines*m_numberOfLines);
	m_index = &((*m_theMatrix)[0]);
	for (int index = 0; index < m_numberOfLines * m_numberOfColumns;index++)
	{
		*(m_index + index) = *(inputMatrix.m_index + index);
	};
	return *this;
};
/*
	----------------------------------------------------------------------
	|                                                                    |
	|                    D E S T R U C T O R                             |
	|                     ---------------                                |
	|                                                                    |
	----------------------------------------------------------------------
*/

//template<class T_MATRIX_ELEMENT>
//Matrix<T_MATRIX_ELEMENT>::~Matrix()
//{
//	delete[] m_theMatrix;
//};

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   OPERATORS OVERLOADING                            |
	|               -------------------------------                      |
	|                                                                    |
	----------------------------------------------------------------------
*/
/*
	----------------------------------------------------------------------
	|                                                                    |
	|                    OVERLOADING of the operator                     |
	|                           "  +  "                                  |
	|                    the addition of two matrices                    |
	|                                                                    |
	----------------------------------------------------------------------
*/

template<class T_MATRIX_ELEMENT>
Matrix<T_MATRIX_ELEMENT> Matrix<T_MATRIX_ELEMENT>::operator+(Matrix imputMatrix)
{
	if (m_numberOfLines != imputMatrix.m_numberOfLines || m_numberOfColumns != imputMatrix.m_numberOfColumns)
	{
		cout << "cele 2 matrice trebuie sa aiba acelas numar de linii si acelas numar de coloane" << endl;
		cout << "                 operatia de adunare nu a fost executata" << endl;
		exit(0);
	}
	Matrix additionResult(m_numberOfLines, m_numberOfColumns);
	for (int i = 0; i < m_numberOfLines * m_numberOfColumns;i++)
	{
		*(additionResult.m_index + i) = *(m_index + i) + *(imputMatrix.m_index + i);
	}
	return additionResult;
};

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   OVERLOADING of the operator                      |
	|                           "  -  "                                  |
	|                  the subtraction of two matrices                   |
	|                                                                    |
	----------------------------------------------------------------------
*/

template<class T_MATRIX_ELEMENT>
Matrix<T_MATRIX_ELEMENT> Matrix<T_MATRIX_ELEMENT>::operator-(Matrix imputMatrix)
{
	if (m_numberOfLines != imputMatrix.m_numberOfLines || m_numberOfColumns != imputMatrix.m_numberOfColumns)
	{
		cout << "cele 2 matrice trebuie sa aiba acelas numar de linii si acelas numar de coloane" << endl;
		cout << "                 operatia de scadere nu a fost executata" << endl;
		exit(0);
	}
	Matrix subtractionResult(m_numberOfLines, m_numberOfColumns);
	for (int i = 0; i < m_numberOfLines * m_numberOfColumns;i++)
	{
		*(subtractionResult.m_index + i) = *(m_index + i) - *(imputMatrix.m_index + i);
	}
	return subtractionResult;
};

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   OVERLOADING of the operator                      |
	|                           "  -  "                                  |
	|                     the unary operation                            |
	|                                                                    |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENT>
Matrix<T_MATRIX_ELEMENT> Matrix<T_MATRIX_ELEMENT>::operator-()
{
	Matrix result(m_numberOfLines, m_numberOfColumns);
	for (int i = 0; i < m_numberOfLines * m_numberOfColumns;i++)
	{
		*(result.m_index + i) = -*(m_index + i);
	}
	return result;
}

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                  OVERLOADING of the operator                       |
	|                           "  *  "                                  |
	|                 multiplication of two matrices                     |
	|                                                                    |
	----------------------------------------------------------------------
*/

template<class T_MATRIX_ELEMENT>
Matrix<T_MATRIX_ELEMENT> Matrix<T_MATRIX_ELEMENT>::operator*(Matrix inputMatrix)
{
	if (m_numberOfColumns != inputMatrix.m_numberOfLines || m_numberOfLines != inputMatrix.m_numberOfColumns)
	{
		cout << "numarul de linii din prima matrice trebuie sa fie egal cu numarul de coloane din a doua matrice" << endl;
		cout << "si numarul de coloane din prima matrice trebuie sa fie egal cu numarul linii din a doua matrice" << endl;
		cout << "                 operatia de inmultire nu a fost executata" << endl;
		exit(0);
	}
	int lineIndex;
	int columnIndex;
	int rezultat;
	int matA;
	int matB;
	Matrix multiplicationResult(m_numberOfLines, m_numberOfLines);
	for (int i = 0; i < m_numberOfLines * m_numberOfLines; i++)
	{
		rezultat = 0;
		lineIndex = i / m_numberOfLines;
		columnIndex = i % m_numberOfLines;
		for (int j = 0;j < m_numberOfColumns;j++)
		{
			matA = *(m_index + lineIndex * m_numberOfColumns + j);
			matB = *(inputMatrix.m_index + inputMatrix.m_numberOfColumns * j + columnIndex);
			rezultat = rezultat + matA * matB;
		};
		*(multiplicationResult.m_index + i) = rezultat;
	}
	return multiplicationResult;
};

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                  OVERLOADING of the operator                       |
	|                           "  ==  "                                 |
	|                 the comparison of two matrices                     |
	|                                                                    |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENT>
bool Matrix<T_MATRIX_ELEMENT>::operator==(Matrix imputMatrix)
{
	bool test = true;
	if (m_numberOfLines == imputMatrix.m_numberOfLines && m_numberOfColumns == imputMatrix.m_numberOfColumns)
	{
		for (int i = 0; i < m_numberOfLines * m_numberOfColumns;i++)
		{
			test = test && (*(imputMatrix.m_index + i) == *(m_index + i));
		}
	}
	else
	{
		test = false;
	}
	return test;
};

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   OVERLOADING of the operator                      |
	|                           "  !=  "                                 |
	|                  the comparison of two matrices                    |
	|                          inequality                                |
	|                                                                    |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENT>
bool Matrix<T_MATRIX_ELEMENT>::operator!=(Matrix imputMatrix)
{
	bool test = true;
	if (m_numberOfLines == imputMatrix.m_numberOfLines && m_numberOfColumns == imputMatrix.m_numberOfColumns)
	{
		for (int i = 0; i < m_numberOfLines * m_numberOfColumns;i++)
		{
			test = test && (*(imputMatrix.m_index + i) == *(m_index + i));
		}
	}
	else
	{
		test = false;
	}
	return !test;
};

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                   OVERLOADING of the operator                      |
	|                           "  []  "                                 |
	|                             index                                  |
	|                        "  matrix[x]  "                             |
	|         returns the address of the first element on line x         |
	|     matrix[0] -> the first element on the first line of the matrix |
	|                                                                    |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENT>
T_MATRIX_ELEMENT* Matrix<T_MATRIX_ELEMENT>::operator[](int inputIndex)
{
	return &(*m_theMatrix)[inputIndex * m_numberOfColumns];
};






/*
	----------------------------------------------------------------------
	|                                                                    |
	|                     O T H E R   M E T H O D S                      |
	|                 ----------------------------------                 |
	|                                                                    |
	----------------------------------------------------------------------
*/
/*
	----------------------------------------------------------------------
	|                                                                    |
	|                RESETTING the matrix from thekeyboard               |
	|             The new dimensions of the matrix will be set           |
	|                        and the new values                          |
	|                                                                    |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENT>
void Matrix<T_MATRIX_ELEMENT>::resetFromKeyboard()
{
	//   display the matrix in its initial state (before update)
	cout << endl << "    The initial matrix is: " << endl;
	for (int i = 0; i < m_numberOfLines;i++)
	{
		for (int j = 0; j < m_numberOfColumns;j++)
		{
			cout << *(m_index + i * m_numberOfColumns + j) << ", ";
		}
		cout << endl;
	};


	//   read the dimensions of the matrix from the keyboard
	cout << endl << "  The matrix will be reset: " << endl << endl;
	cout << "Enter the number of LINES : ";
	cin >> m_numberOfLines;
	cout << endl << "Enter the number of COLUMNS: ";
	cin >> m_numberOfColumns;


	//  check the validity of the dimensions entered from the keyboard
	if (m_numberOfLines <= 0 && m_numberOfColumns <= 0)
	{
		cout << "Illegal values for matrix sizes!" << endl;
		cout << "The values for the matrix dimensions must be greater than 0!" << endl;
		exit(0);
	};


	//  delete all elements from the vector, its length becomes 0, and then we set its new length
	m_theMatrix->clear();
	m_theMatrix->resize(m_numberOfLines * m_numberOfLines);
	m_index = &((*m_theMatrix)[0]);


	//  read the elements of the matrix from the keyboard
	cout << endl << endl << "  Enter the matrix elements: " << endl << endl;
	for (int i = 0; i < m_numberOfLines;i++)
	{
		for (int j = 0; j < m_numberOfColumns;j++)
		{
			cout << "Line " << i << ", Column " << j << ":  ";
			cin >> *(m_index + i * m_numberOfColumns + j);
		};
		cout << endl;
	};
};

/*
	----------------------------------------------------------------------
	|                                                                    |
	|          INITIALIZING the matrix with ascending numbers            
	|                                                                    |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENT>
void Matrix<T_MATRIX_ELEMENT>::reinitializationWithAscendingNumbers()
{
	for (int i = 0; i < m_numberOfLines * m_numberOfColumns;i++)
	{
		*(m_index + i) = i;
	}
};

/*
	----------------------------------------------------------------------
	|                                                                    |
	|           INITIALIZING the matrix with descending numbers          |
	|                                                                    |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENTS>
void Matrix<T_MATRIX_ELEMENTS>::reinitializationWithDescendingNumbers()
{
	for (int i = 0; i < m_numberOfLines * m_numberOfColumns;i++)
	{
		*(m_index + i) = m_numberOfLines * m_numberOfColumns - i;
	}
};

/*
	----------------------------------------------------------------------
	|                                                                    |
	|                  DISPLAY the matrix on the screen                  |
	|                                                                    |
	----------------------------------------------------------------------
*/
template<class T_MATRIX_ELEMENTS>
void Matrix<T_MATRIX_ELEMENTS>::printOnScreen()
{
	cout << endl;
	for (int i = 0; i < m_numberOfLines;i++)
	{
		for (int j = 0; j < m_numberOfColumns;j++)
		{
			cout << *(m_index + i * m_numberOfColumns + j) << ", ";
		}
		cout << endl;
	};
	cout << endl << endl;
};