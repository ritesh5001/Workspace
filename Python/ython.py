li = range(100)
# multiply each item in a list by 2
[x*2 for x in li]

# sum a list
sum(li)

# verify if exists in a string.
word_list = ["iterate", "comprehension", "for", "yield", "Guido"]

tweet_yes = "Guido said to iterate over the comprehension"

any(w in tweet_yes for w in word_list)

# read in a file
open(__file__).read()
# lines
open(__file__).readlines() or list(open(__file__))
# iterator
open(__file__)

# happy birthday
print "\n".join("happy birthday %s" % ("dear NAME" if i == 3 else "to you") \
                  for i in range(1, 4))

# filter a list of number
over_60 = [x for x in range(10, 100, 10) if x > 60]

# find max / min of a list
max(li)
min(li)

# xml
import urllib
import xml.etree.ElementTree as et
xml = urllib.urlopen('http://search.twitter.com/search.atom?&q=python').read()
print et.parse(xml)



# parallel processing
import multiprocessing as mp
def x2(v): return v * 2
mp.Pool(3).map(x2, li)

# prime number generation. (http://wiki.python.org/moin/SimplePrograms)
import itertools
def pgen():
    numbers = itertools.count(2)
    while True:
        prime = numbers.next()
        yield prime
        numbers = itertools.ifilter(prime.__rmod__, numbers)

itertools.islice(pgen(), 40)