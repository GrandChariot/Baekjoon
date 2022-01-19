use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();
    io::stdin().read_line(&mut input1).expect("read error");
    io::stdin().read_line(&mut input2).expect("read error");
    let x: i32 = input1.trim().parse().expect("parse error");
    let y: i32 = input2.trim().parse().expect("parse error");

    if x > 0 {
        if y > 0 {
            println!("1");
        } else {
            println!("4");
        }
    } else {
        if y > 0 {
            println!("2");
        }
        else {
            println!("3");
        }
    }
}