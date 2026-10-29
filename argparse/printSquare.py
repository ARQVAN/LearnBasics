import argparse

parser = argparse.ArgumentParser()
parser.add_argument("square", help="The number to find its square", type=int)

args = parser.parse_args()
print(args.square**2)
