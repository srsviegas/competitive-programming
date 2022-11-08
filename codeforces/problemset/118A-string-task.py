""" Petya started to attend programming lessons. On the first lesson his task
was to write a simple program. The program was supposed to do the following:
in the given string, consisting if uppercase and lowercase Latin letters, it:
    deletes all the vowels,
    inserts a character "." before each consonant,
    replaces all uppercase consonants with corresponding lowercase ones. """


def manipulate_str(string: str):
    return ''.join(
        ('.' + c) for c in string.lower()
        if c not in ['a', 'o', 'y', 'e', 'u', 'i']
    )


if __name__ == "__main__":
    print(manipulate_str(input()))