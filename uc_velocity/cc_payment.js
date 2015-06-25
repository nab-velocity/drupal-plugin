/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
jQuery('#Not_Now').ready(function(){
    jQuery('#Not_Now').click(function(){
        var str = window.location.href;
        var len = str.length;
        var subst = str.substr(0, len-7);
        window.location.href = subst;
        return false;
    });
});