class Solution {
    public int maxProduct(int n) {
      ArrayList<Integer> l=new ArrayList<>();
      while(n>0){
        int d=n%10;
        l.add(d);
        n=n/10;
      }
      Collections.sort(l);
      int t=l.size();
      return l.get(t-1)*l.get(t-2); 
    }
}