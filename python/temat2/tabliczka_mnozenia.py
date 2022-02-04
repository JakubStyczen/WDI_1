#skończone
print('  |',end=" ")
for i in range(1, 11): 
    print('{:3d}'.format(i), end=" ")
print('\n--------------------------------------------')
for i in range(1, 11):
    print('{:d} |'.format(i), end=" ")
    for j in range(1, 11):
        x=i*j
        print('{:3d}'.format( x), end=" ")
    print('')
