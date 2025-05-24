class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {
        List<Integer> ans=new ArrayList<>();
        String temp=new String();
        for(int i=0;i<words.length;i++){
            temp=words[i];
            for(char j:temp.toCharArray()){
                if(j==x){
                    ans.add(i);
                    break;
                }
            }
        }
        return ans;
    }
}