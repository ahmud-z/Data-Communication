import matplotlib.pyplot as plt
def nrzl_encoding(input_bits):
    encoded_signal = []

    for bit in input_bits:
        encoded_signal.extend([bit, bit])

    return encoded_signal

def nrzl_decoding(encoded_signal):
    decoded_bits = []

    for i in range(0, len(encoded_signal), 2):
        decoded_bits.append(encoded_signal[i])

    return decoded_bits

if __name__ == "__main__":
    input_bits_str = input("Enter you data bits (e.g., 10111): ")
    input_bits = [int(bit) for bit in input_bits_str]

    print("Input bits:", input_bits)

    encoded_signal = nrzl_encoding(input_bits)
    print("Encoded Signal:", encoded_signal)

    decoded_bits = nrzl_decoding(encoded_signal)
    print("Decoded bits:", decoded_bits)

    plt.step(range(2 * len(input_bits)), encoded_signal, where="post")
    plt.title("NRZ-L Encoding")
    plt.xlabel("Bit index")
    plt.ylabel("Signal Level")
    plt.grid(True)
    plt.show()