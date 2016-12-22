//
//  ViewController.swift
//  quizApp
//
//  Created by Demetrius King on 12/05/2016.
//  Copyright © 2016 Demetrius. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    let questions = ["How many days are there in 1 year?", "How many days are in a week?", "What is the capital of Georgia?", "What is 2+5?", "Who is the president-elect?", "What kind of weapon is a falchion?", "How old is America?", "Name the seventh planet from the sun", "What was the Drake album that came out in 2013?", "Who is the best professor in the CS department?"]
    let answers = [["365", "360", "384"], ["7", "20", "green"], ["Atlanta", "Tokyo", "New York"], ["7", "1", "17"], ["Donald Trump", "Barack Obama", "Hilary Clinton"], ["sword", "dagger", "gun"], ["240", "310", "290"], ["Uranus", "Jupiter", "Earth"], ["Take Care", "Just Hold On", "Views"], ["Dr. Johnson", "Dr. Dennis", "Dr. Ng"]]
    
    //Variables
    var currentQuestion = 0
    var rightAnswerPlacement:UInt32 = 0
    var points = 0;
    
    //Label
    @IBOutlet weak var lbl: UILabel!
    
    //Button
    @IBAction func action(_ sender: AnyObject)
    {
        if (sender.tag == Int(rightAnswerPlacement))
        {
            print ("RIGHT!")
            points += 1
        }
        if(sender.tag != Int(rightAnswerPlacement))
        {
            print ("WRONG!!!!!!")
        }
        
        if (currentQuestion != questions.count)
        {
            newQuestion()
        }
        else
        {
            performSegue(withIdentifier: "showScore", sender: self)
            print("Congratulations, you got ", points, "out of 10 correct!")
           
        }
    }
    
    override func viewDidAppear(_ animated: Bool)
    {
        newQuestion()
    }
    
    //Function that displays new question
    func newQuestion()
    {
        lbl.text = questions[currentQuestion]
        
        rightAnswerPlacement = arc4random_uniform(3)+1
        
        //Create a button
        var button:UIButton = UIButton()
        
        var x = 1
        
        for i in 1...3
        {
            //Create a button
            button = view.viewWithTag(i) as! UIButton
            
            if (i == Int(rightAnswerPlacement))
            {
                button.setTitle(answers[currentQuestion][0], for: .normal)
            }
            if (i == Int(rightAnswerPlacement))
            {
                button.setTitle(answers[currentQuestion][0], for: .normal)
            }
            if (i == Int(rightAnswerPlacement))
            {
                button.setTitle(answers[currentQuestion][0], for: .normal)
            }
          

            else
            {
                button.setTitle(answers[currentQuestion][x], for: .normal)
                x = 2
            }
        }
        currentQuestion += 1
    }
    

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

