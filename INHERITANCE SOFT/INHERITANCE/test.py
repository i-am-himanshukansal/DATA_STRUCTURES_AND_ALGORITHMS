def main () :
2 x = get_input ()
3 y = process_data ( x )
4 z = generate_report ( y )
5 display_report ( z )
6
7 def get_input () :
8 return 10
9
10 def process_data ( data ) :
11 return data * 2
12
13 def generate_report ( result ) :
14 return f" Report : { result }"
15
16 def display_report ( report ) :
17 print ( report )