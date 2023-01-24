use std::io;

fn main() {

    let mut input = String::new();

     io::stdin()
        .read_line(&mut input)
        .expect("Erro ao ler");

     let array: Vec<i32> = input
        .split_whitespace()
        .filter_map(|x| x.parse().ok())
        .collect();

     let mut b: Vec<i32> = array 
         .iter()
         .map(|&x| x * x)
         .collect();

     b.sort();

    println!("{:?}", b);
}
