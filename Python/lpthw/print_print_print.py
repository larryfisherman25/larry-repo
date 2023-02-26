formatter = "{} {} {} {}"

print(formatter.format(1, 2, 3, 4))
print(formatter.format('one', 'two', 'three', 'four'))
print(formatter.format(formatter, formatter, formatter, formatter))
print(formatter.format(
    'insert your text',
    'here now and then',
    'after a lot of trying',
    "I'm studyin now"
))