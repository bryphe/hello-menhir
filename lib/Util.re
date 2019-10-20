open Lexer;

let hello = () => {
  let lexbuf = Lexing.from_string("2+2*3;");
  switch (Parser.main(Lexer.token, lexbuf)) {
  | exception Lexer.Error(msg) => print_endline ("lexer error: " ++ msg)
  | exception Parser.Error => print_endline ("Error");
  | v => print_endline("parsed ok"); 
    List.iter((i) => print_endline ("result: " ++ string_of_int(i)), v);
  };
  "hello";
};
