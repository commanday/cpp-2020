### char *ctime:

__for example__

```javascript
int main( )
{
   time_t now = time(0);   
   char* dt = ctime(&now); 
   cout << "The local time：" << dt << endl;
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC time："<< dt << endl;
```
