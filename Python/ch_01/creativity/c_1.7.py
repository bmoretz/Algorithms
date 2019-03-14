# Had we implemented the scale function (page 25) as follows, does it work properly? 

def scale(data, factor): 
    for val in data: 
        val *= factor
    
# Explain why or why not.

# No. This would just create new aliases and then dispose of them when the method is finished.

