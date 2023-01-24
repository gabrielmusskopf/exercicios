use std::io;

fn main() {

    let mut string = String::new();

    io::stdin()
        .read_line(&mut string)
        .expect("Deve ser uma string");

    for i in 0..(string.len()-1) {
        let atual= string.chars().nth(i).expect("Deve existir");
        let proximo = string.chars().nth(i + 1).expect("Deve existir");

        if proximo == atual {
            println!("{atual}");
            break;
        }
    }

}
