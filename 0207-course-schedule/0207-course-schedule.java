class Solution {
    public boolean canFinish(int Courses, int[][] prerequisites) {
        ArrayList < ArrayList < Integer >>adj=new ArrayList<>();
        for(int i=0;i<=Courses;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<prerequisites.length;i++){
            adj.get(prerequisites[i][1]).add(prerequisites[i][0]);
        }
        Queue<Integer>q=new LinkedList<>();
        int num[]=new int[Courses];
        
        for(int i=0;i<Courses;i++){
            for(int e:adj.get(i)){
                num[e]++;
            }
        }
        for(int i=0;i<Courses;i++){
            if(num[i]==0){
                q.add(i);
            }
        }       
        int ans[]=new int[Courses];
        int i=0;
        
        while(!q.isEmpty()){
            int node=q.peek();
            q.poll();
            ans[i++]=node;
            
            for(int e:adj.get(node)){
                num[e]--;
                if(num[e]==0) q.add(e);
            }
        }
        if(i==Courses) return true;
        return false;
    }
}