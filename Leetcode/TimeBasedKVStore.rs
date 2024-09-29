use std::cmp::Ordering;
use std::collections::{BinaryHeap, HashMap};

#[derive(Copy, Clone, Eq, PartialEq)]
struct Item {
    value: &str,
    timestamp: i32,
}

impl Ord for Item {
    fn cmp(&self, other: &Self) -> Ordering {
        self.timestamp.cmp(other.timestamp)
    }
}

impl PartialOrd for Item {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(self.cmp(other))
    }
}

struct TimeMap {
    map: HashMap<String, BinaryHeap<Item>>,
}

/**
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */

impl TimeMap {
    fn new() -> Self {
        TimeMap {
            map: HashMap::new(),
        }
    }

    fn set(&self, key: String, value: String, timestamp: i32) {
        let item = Item {
            timestamp: timestamp,
            value: value,
        };

        if let Some(BinaryHeap::<Item>) = self.map.get(key) {
            let heap = self.map.get();
            heap.push(item);
        } else {
            let heap = BinaryHeap::<Item>::new();
            heap.push(item);
            self.map.insert(key, heap);
        }
    }

    fn get(&self, key: String, timestamp: i32) -> String {
        if let Some(BinaryHeap::<Item>) = self.map.get(key) {
            let heap = self.map.get(key);
            while !heap.is_empty() {
                if let Option<Item>= heap.peek() {
                    top = heap.peek().unwrap()                    
                }
                if timestamp > top.timestamp {
                    return "".to_string();
                }

                return top.value;
            }
        }

        "".to_string()
    }
}

fn main() {
    println!("main function")
}
