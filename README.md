A simple Event Handler where you can give a singleton that contains Observers a function then while in another class, run that function. NOT THREAD TESTED
which you may confuse you as to why anyone whould want to use it, I created it because I had a weird case where I had a single threaded project that all ran inside a loop
so I needed a way to added functionality before entering the loop.
