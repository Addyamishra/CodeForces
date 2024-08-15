// public class mat{
//        public static void main(String[] args) {
//            int[][] matrixA = {
//                {1, 2, 3},
//                {4, 5, 6}
//            };
//            int[][] matrixB = {
//                {7, 8},
//                {9, 10},
//                {11, 12}
//            };
   
//            int[][] result = multiplyMatrices(matrixA, matrixB);
   
//            System.out.println("Resulting Matrix:");
//            printMatrix(result);
//        }
   
//        public static int[][] multiplyMatrices(int[][] a, int[][] b) {
//            int rowsA = a.length;
//            int colsA = a[0].length;
//            int rowsB = b.length;
//            int colsB = b[0].length;
   
//            if (colsA != rowsB) {
//                throw new IllegalArgumentException("Number of columns of A must be equal to number of rows of B.");
//            }
   
//            int[][] result = new int[rowsA][colsB];
   
//            for (int i = 0; i < rowsA; i++) {
//                for (int j = 0; j < colsB; j++) {
//                    result[i][j] = 0;
//                    for (int k = 0; k < colsA; k++) {
//                        result[i][j] += a[i][k] * b[k][j];
//                    }
//                }
//            }
   
//            return result;
//        }
   
//        public static void printMatrix(int[][] matrix) {
//            for (int[] row : matrix) {
//                for (int element : row) {
//                    System.out.print(element + " ");
//                }
//                System.out.println();
//            }
//        }
//    }
   

// practical 10

// public class mat{
//       static int my_meth(int x,int y)
//        {
//               return x+y;
//        }
//      static  double my_meth(double x,double y){
//               return x+y;
//        }
//        public static void main(String[] args) {
//               int m1=my_meth(8,5);
//               double m2=my_meth(8.1,5.7);

//               System.out.println("int: "+m1);
//               System.out.println("double: "+m2);
//               }
// }

public class mat{
       int id;
       String name;
       mat(){
       System.out.println("default constructer");
       }
       mat(int i,String s){
              id=i;
              name=s;
       }
       public static void main(String[] args) {
              mat a=new mat();
              System.out.println("default constructer value");
              System.out.println("stdid" + a.id+ "name"+a.name);
              mat b=new mat(23,"mait");
              System.out.println("default constructer value");
              System.out.println("stdid" + b.id+ "name"+b.name);

       }
}