# 🔐 Multi-Layer Encryption System in C++

This project is a C++ implementation of a **multi-step encryption system** that applies several encryption algorithms in sequence to ensure high data confidentiality. Each step is randomly selected and parameterized, making the final ciphertext highly unpredictable.

---

## 🚀 Features

- Supports multiple encryption algorithms:
  - Caesar Cipher
  - XOR Cipher
  - Vigenère Cipher
- Randomized encryption sequence and keys
- Fully reversible (decryption is possible if the steps are known)
- Modular and extendable design
- CMake-powered build system

---

## 📁 Project Structure

EncryptorProject/
├── include/
│ ├── algorithms/
│ │ ├── caesar.hpp
│ │ ├── xor.hpp
│ │ └── vigenere.hpp
│ ├── encryptor.hpp
│ └── utils.hpp
├── src/
│ ├── algorithms/
│ │ ├── caesar.cpp
│ │ ├── xor.cpp
│ │ └── vigenere.cpp
│ ├── encryptor.cpp
│ ├── utils.cpp
│ └── main.cpp
├── CMakeLists.txt
├── build/ (generated after build)
└── README.md




---

## ⚙️ How to Build & Run

### Prerequisites

- C++17 or later
- [CMake](https://cmake.org/download/)

### Build Instructions

```bash
# Navigate to the project root
cd EncryptorProject

# Create a build directory
mkdir build && cd build

# Generate Makefiles
cmake ..

# Compile
cmake --build .

# Run
./encrypting.exe
💡 Example
vbnet
Copy
Edit
Enter text to encrypt : Sepehr

Encrypted: `RGR_A

Decrypting using xor with key: 5 or string key:
Decrypting using caesar with key: 2 or string key:
Decrypted : Sepehr
📌 Notes
The encryption steps and keys are randomly generated on each run.

The decryption process requires access to the exact sequence of encryption steps.

This project is for educational purposes and not recommended for real-world security use.

🧠 Future Improvements
Add support for more algorithms (e.g., AES, RSA)

Encrypt the encryption steps themselves

GUI or web interface

Save/load encryption sessions to/from file

🧑‍💻 Author
Made with 💻 by [Your Name]
Feel free to contribute or open issues!

📜 License
This project is open-source and available under the MIT License.

yaml
Copy
Edit

---

Let me know if you'd like me to localize it for Persian users or turn it into a stylish GitHub page.








Ask ChatGPT
