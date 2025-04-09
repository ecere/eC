public import "ecrt"
public import "ectp2"

ConsoleFile console { };

class App : Application
{
   void Main()
   {
      File f = FileOpen("test.ec", read);
      if(f)
      {
         initParser(f);
         {
            AST ast = AST::parse();
            if(ast)
            {
               ast.print(console, { /*astType = true*/ });
               ast.Free();
               delete ast;
            }
         }
         /*
         {
            ASTExpression exp = ASTExpression::parse();
            exp.print();
            PrintLn("");
            PrintLn(exp.compute());
         }
         */
         delete f;
      }
   }
}
