def shout_all(word1, word2):
    shout1 = word1 + '!!!'
    shout2 = word2 + '!!!'
    
    return shout1, shout2

yell1, yell2 = shout_all('congratulations', 'you')

print(yell1.capitalize())
print(yell2.upper())